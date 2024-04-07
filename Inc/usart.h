/*
 * usart.h
 *
 *  Created on: Feb 4, 2024
 *      Author: Pee
 */

#include <stddef.h>
#include "stm32g0b1xx.h"

#ifndef USART_H_
#define USART_H_

#define USART1_BUFFER_SIZE ((uint8_t)25)		// Real size is USART1_BUFFER_SIZE - 1, last element is for terminating null
#define USART2_BUFFER_SIZE ((uint8_t)25)		// Real size is USART1_BUFFER_SIZE - 1, last element is for terminating null

void UART1_innit(void);
void UART2_innit(void);

void delay(int n);

void UART1_send(char *msg, size_t len);
void UART2_send(char *msg, size_t len);
uint8_t USART1_Read(char *str) ;
uint8_t USART2_Read(char *str) ;
char *USART1_ReadStringExp() ;
char *USART2_ReadStringExp() ;



#endif /* USART_H_ */
