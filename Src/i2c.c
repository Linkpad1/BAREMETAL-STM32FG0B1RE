/*
 * i2c.c
 *
 *  Created on: Mar 10, 2024
 *      Author: Pee
 */
// I2c for pins B6 & B9 (B6 = SCK | B9 = SDA)

#include "i2c.h"

//I2C1
//PA9 = SCL
//PA10 = SDA


void I2C1_Init(void) {

	RCC->APBENR1 |= RCC_APBENR1_I2C1EN;
	RCC->IOPENR |= RCC_IOPENR_GPIOAEN;

    GPIOC->MODER &= ~(3 << 18); // Reset bits for PA9
	GPIOC->MODER &= ~(3 << 20); // Reset bits for PA10

    GPIOC->MODER |= (2 << 18); // alternate bits 2 for PA9 I2C1
    GPIOC->MODER |= (2 << 20); // alternate bits 2 for PA10 I2C1

    // set pin modes as low speed
    GPIOC->OSPEEDR |= (1 << 18);
    GPIOC->OSPEEDR |= (1 << 20);

    // choose AF6 for I2C1 in Alternate Function registers
    GPIOC->AFR[0] |= (6 << 18); // for pin PC4
    GPIOC->AFR[0] |= (6 << 20); // for pin PC5

    // reset and clear reg
	I2C1->CR1 = I2C_CR1_SWRST;
	I2C1->CR1 = 0;

	I2C1->CR1 |= (I2C_CR1_ERRIE); // enable error interrupt

   	I2C1->TIMINGR |=  0x40003EFF; // Set I2C1 Timing

    // set own address to 00 - not really used in master mode
    I2C1->OAR1 |= (0x00 << 1);
    I2C1->OAR1 |= (1 << 14); // bit 14 should be kept at 1 according to the datasheet

    // enable error interrupt from NVIC
    //NVIC_SetPriority(I2C1_ER_IRQn, 4);
    //NVIC_EnableIRQ(I2C1_ER_IRQn);

    I2C1->CR1 |= I2C_CR1_PE; // enable i
}

void I2C1_Start() {

	//while ((I2C1->SR2 & I2C_SR2_BUSY));			// 1: Communication ongoing on the bus

	I2C1->CR2 |= I2C_CR2_START;						// 1: Repeated start generation

	while ( !(I2C1->ISR & I2C_ISR_TC)  ||			// 0: No Start condition
			!(I2C1->ISR & I2C_ISR_BUSY)				// 0: No communication on the bus
	);
}

void I2C1_Stop() {

	I2C1->CR2 |= I2C_CR2_STOP;						// 1: Stop generation after the current byte transfer or after the current Start condition is sent.

	while((I2C1->ISR & I2C_ISR_STOPF));				// 1: Stop condition detected
}

I2C_Status_Type I2C1_SendAddress(uint8_t address, I2C_Direction_Type direction) {

	uint32_t timeout = 1000000;

	address <<= 1;

	if (direction == I2C_TRANSMITTER) {
		address &= ~(1 << 0);						// Reset the address bit0 for write
		I2C1->TXDR = address;
		while ((!(I2C1->ISR & I2C_ISR_ADDR) ||		// 0: No end of address transmission
				!(I2C1->ISR & I2C_ISR_BUSY) ||		// 0: No communication on the bus
				!(I2C1->ISR & I2C_ISR_DIR)) &&		// 0: Data bytes Direction
				--timeout
		);
	} else if (direction == I2C_RECEIVER) {
		address |= (1 << 0);						// Set the address bit0 for read
		I2C1->TXDR = address;
		while ((!(I2C1->ISR & I2C_ISR_ADDR) ||		// 0: No end of address transmission
			    !(I2C1->ISR & I2C_ISR_BUSY))&&		// 0: No communication on the bus
				--timeout
		);
	}
	if (timeout <= 0) {
		return I2C_ERROR;
	}

	return I2C_OK;
}

void I2C1_SendData(uint8_t data) {

	I2C1->TXDR = data;

	while ( !(I2C1->ISR & I2C_ISR_TC)  ||			// 0: Data byte transfer not done
			!(I2C1->ISR & I2C_ISR_TXE)  ||			// 0: Data register not empty
			!(I2C1->ISR & I2C_ISR_BUSY) ||			// 0: No communication on the bus
			!(I2C1->ISR & I2C_ISR_DIR)				// 0: Data bytes Direction
);
}

uint8_t I2C1_ReceiveData(I2C_Acknowledge_Type acknowledge) {

	if (acknowledge == I2C_ACK) {
		I2C1->CR2 &= ~I2C_CR2_NACK;					// 0: ACK - Acknowledge returned after a byte is received (matched address or data)
	} else if (acknowledge == I2C_NACK) {
		I2C1->CR2 |= I2C_CR2_NACK;					// 1: NACK - No acknowledge returned
	}

	while ( !(I2C1->ISR & I2C_ISR_RXNE) ||			// 0: Data register empty
			!(I2C1->ISR & I2C_ISR_BUSY)				// 0: No communication on the bus
	);
	return (uint8_t)I2C1->RXDR;
}





