/*
 * spi.c
 *
 *  Created on: Apr 7, 2024
 *      Author: Pee
 */

#include "spi.h"

//SPI1 =
//PA1 = SCK
//PA7 = MOSI
//PA4 = NSS

void SPI1_Init(void) {

	RCC->APBENR2 |= RCC_APBENR2_SPI1EN; // Enable SPI1
	RCC->IOPENR |= RCC_IOPENR_GPIOAEN; // Enable Port A

    GPIOC->MODER &= ~(3 << 2); // Reset bits for PA1
	GPIOC->MODER &= ~(3 << 14); // Reset bits for PA7
	GPIOC->MODER &= ~(3 << 8); // Reset bits for PA4

    GPIOC->MODER |= (2 << 2); // alternate bits 2 for PA1
    GPIOC->MODER |= (2 << 14); // alternate bits 2 for PA7
    GPIOC->MODER |= (2 << 8); // alternate bits 2 for PA4

    // set pin modes as low speed
    GPIOC->OSPEEDR |= (1 << 2);
    GPIOC->OSPEEDR |= (1 << 14);
    GPIOC->OSPEEDR |= (1 << 8);

    // choose AF0 for SPI1 in Alternate Function registers
    GPIOC->AFR[0] |=  (0 << 2); // for pin PA1
    GPIOC->AFR[0] |=  (0 << 14); // for pin PA7
    GPIOC->AFR[0] |=  (0 << 8); // for pin PA4


	// SPI1
	SPI1->CR1 = 0;								// Reset
	SPI1->CR1 |= SPI_CR1_MSTR;					// 1: Master configuration
	SPI1->CR1 |= SPI_CR1_BR_2 | SPI_CR1_BR_1;	// 110: fPCLK/128
	SPI1->CR1 |= SPI_CR1_SSI;					// SSI: Internal slave select
	SPI1->CR1 |= SPI_CR1_SSM;					// 1: Software slave management enabled

	SPI1->CR1 |= SPI_CR1_SPE;					// 1: Peripheral enabled

	SPI1_DisableSlave();
}


void SPI1_EnableSlave() {

	GPIOA->BRR |= GPIO_BRR_BR4;					// 1: Reset the corresponding ODRx bit (A4)
}

void SPI1_DisableSlave() {

	GPIOA->BSRR |= GPIO_BSRR_BS4;				// 1: Set the corresponding ODRx bit (A4)
}

uint8_t SPI1_Write(uint8_t data) {

	SPI1->DR = data;

	while (!(SPI1->SR & SPI_SR_TXE));			// 0: Tx buffer not empty
	while (!(SPI1->SR & SPI_SR_RXNE));			// 0: Rx buffer empty
	while (SPI1->SR & SPI_SR_BSY);				// 1: SPI is busy in communication or Tx buffer is not empty

	return (uint8_t)SPI1->DR;
}







