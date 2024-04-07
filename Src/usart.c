

#include "usart.h"

volatile char usart1_buffer[USART1_BUFFER_SIZE] = {0};
volatile uint8_t usart1_index = 0;
volatile uint8_t usart1_ready = 0;
volatile char usart2_buffer[USART1_BUFFER_SIZE] = {0};
volatile uint8_t usart2_index = 0;
volatile uint8_t usart2_ready = 0;



void UART1_innit(void)
{
// USART1 Pins = PC4 = TX // PC5 = RX

// enable USART1 clock
	RCC->APBENR2 |= RCC_APBENR2_USART1EN;
    // enable GPIOC clock
    RCC->IOPENR |= RCC_IOPENR_GPIOCEN;

    GPIOC->MODER &= ~(3 << 8); // Reset bits for PC4
    GPIOC->MODER &= ~(3 << 10); // Reset bits for PC5

    GPIOC->MODER |= (2 << 8); // alternate bits 2 for PC4
    GPIOC->MODER |= (2 << 10); // alternate bits 2 for PC5

    // set pin modes as low speed
    GPIOC->OSPEEDR |= (1 << 8);
    GPIOC->OSPEEDR |= (1 << 10);

    // choose AF1 for USART1 in Alternate Function registers push-pull
    GPIOC->AFR[0] |= (1 << 16); // for pin PC4
    GPIOC->AFR[0] |= (1 << 20); // for pin PC5

    USART1->BRR = (16000000/9600);	// BAUD RATE

    // enable usart1
    USART1->CR1 |= USART_CR1_UE;
    // USART2 TX enable, TE bit 3
    USART1->CR1 |= USART_CR1_TE;
    // USART2 rx enable, RE bit 2
    USART1->CR1 |= USART_CR1_RE;
}


void UART2_innit(void)
{
	// USART2 Pins = PA2 = TX // PA3 = RX
// enable USART2 clock
	RCC->APBENR1 |= RCC_APBENR1_USART2EN;
    // enable GPIOA clock
    RCC->IOPENR |= RCC_IOPENR_GPIOAEN;

    // set pin modes as alternate mode 4 (pins 2 and 3)
    // USART2 TX and RX pins are PA2 and PA3 respectively

    GPIOA->MODER &= ~(3 << 4); // Reset bits for PA2
    GPIOA->MODER &= ~(3 << 6); // Reset bits for PA3

    GPIOA->MODER |= (2 << 4); // alternate bits 4:5 for PA2 and 6:7 for PA3
    GPIOA->MODER |= (2 << 6); // alternate bits 4:5 for PA2 and 6:7 for PA3

    // set pin modes as low speed
    GPIOA->OSPEEDR |= (1 << 4);
    GPIOA->OSPEEDR |= (1 << 6);

    // choose AF1 for USART2 in Alternate Function registers push-pull
    GPIOA->AFR[0] |= (1 << 8); // for pin A2
    GPIOA->AFR[0] |= (1 << 12); // for pin A3

    USART2->BRR = (16000000/9600);	// BAUD RATE

    // enable usart2
    USART2->CR1 |= USART_CR1_UE;
    // USART2 TX enable, TE bit 3
    USART2->CR1 |= USART_CR1_TE;
    // USART2 rx enable, RE bit 2
    USART2->CR1 |= USART_CR1_RE;
}


void UART1_send(char *msg, size_t len){
for (uint64_t i=0; i<len; i++)
{
     // send character
     USART1->TDR = msg[i];
     // wait for transmit complete (ts)
     while(!(USART1->ISR & (1 << 6)));
}
}


void UART2_send(char *msg, size_t len){
for (uint64_t i=0; i<len; i++)
{
     // send character
     USART2->TDR = msg[i];
     // wait for transmit complete (ts)
     while(!(USART2->ISR & (1 << 6)));
}
}

// -----------------------------------------------
// USART1 Read String, copy buffer
// -----------------------------------------------
uint8_t USART1_Read(char *str) {

	if (usart1_ready) {

		uint8_t i = 0;

		while (usart1_buffer[i] != 0) {
			str[i] = usart1_buffer[i];		// Copy volatile buffer to external buffer
			i++;
		}

		str[i] = 0;							// Add terminating NULL to external buffer
		usart1_ready = 0;					// Read usart buffer only once

		return 1;
	}

	return 0;
}

// -----------------------------------------------
// USART1 Read String, copy buffer
// -----------------------------------------------
uint8_t USART2_Read(char *str) {

	if (usart2_ready) {

		uint8_t i = 0;

		while (usart2_buffer[i] != 0) {
			str[i] = usart2_buffer[i];		// Copy volatile buffer to external buffer
			i++;
		}

		str[i] = 0;							// Add terminating NULL to external buffer
		usart2_ready = 0;					// Read usart buffer only once

		return 1;
	}

	return 0;
}

char *USART1_ReadStringExp() {

	if (usart1_ready) {
		usart1_ready = 0;					// Read usart buffer only once

		return usart1_buffer;
	}

	return 0;
}

char *USART2_ReadStringExp() {

	if (usart2_ready) {
		usart2_ready = 0;					// Read usart buffer only once

		return usart2_buffer;
	}

	return 0;
}


