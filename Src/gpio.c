/*
 * gpio.c
 *
 *  Created on: Jan 13, 2024
 *      Author: Pee
 */

#include "gpio.h"
#include "main.h"

void GPIOAoutput(void)
// Set up STM32F412G Discovery GPIO A = Output
{
// ENABLE CLOCK ACCESS TO GPIO A
RCC->IOPENR = RCC_IOPENR_GPIOAEN;
// Pin A0 Output
GPIOA->MODER |=(1U<<0);  // SET BIT 0 to 1
GPIOA->MODER &=~(1U<<1);  // SET BIT 1 to 0
// Pin A1 Output
GPIOA->MODER |=(1U<<2);  // SET BIT 2 to 1
GPIOA->MODER &=~(1U<<3);  // SET BIT 3 to 0
// Pin A2 Output
GPIOA->MODER |=(1U<<4);  // SET BIT 4 to 1
GPIOA->MODER &=~(1U<<5);  // SET BIT 5 to 0
// Pin A3 Output
GPIOA->MODER |=(1U<<6);  // SET BIT 6 to 1
GPIOA->MODER &=~(1U<<7);  // SET BIT 7 to 0
// Pin A4 Output
GPIOA->MODER |=(1U<<8);  // SET BIT 8 to 1
GPIOA->MODER &=~(1U<<9);  // SET BIT 9 to 0
// Pin A5 Output
GPIOA->MODER |=(1U<<10);  // SET BIT 10 to 1
GPIOA->MODER &=~(1U<<11);  // SET BIT 11 to 0
// Pin A6 Output
GPIOA->MODER |=(1U<<12);  // SET BIT 12 to 1
GPIOA->MODER &=~(1U<<13);  // SET BIT 13 to 0
// Pin A7 Output
GPIOA->MODER |=(1U<<14);  // SET BIT 14 to 1
GPIOA->MODER &=~(1U<<15);  // SET BIT 15 to 0
// Pin A8 Output
GPIOA->MODER |=(1U<<16);  // SET BIT 14 to 1
GPIOA->MODER &=~(1U<<17);  // SET BIT 15 to 0
// Pin A9 Output
GPIOA->MODER |=(1U<<18);  // SET BIT 14 to 1
GPIOA->MODER &=~(1U<<19);  // SET BIT 15 to 0
// Pin A10 Output
GPIOA->MODER |=(1U<<20);  // SET BIT 14 to 1
GPIOA->MODER &=~(1U<<21);  // SET BIT 15 to 0
// Pin A11 Output
GPIOA->MODER |=(1U<<22);  // SET BIT 14 to 1
GPIOA->MODER &=~(1U<<23);  // SET BIT 15 to 0
// Pin A12 Output
GPIOA->MODER |=(1U<<24);  // SET BIT 14 to 1
GPIOA->MODER &=~(1U<<25);  // SET BIT 15 to 0
// Pin A13 Output
GPIOA->MODER |=(1U<<26);  // SET BIT 14 to 1
GPIOA->MODER &=~(1U<<27);  // SET BIT 15 to 0
// Pin A14 Output
GPIOA->MODER |=(1U<<28);  // SET BIT 14 to 1
GPIOA->MODER &=~(1U<<29);  // SET BIT 15 to 0
// Pin A15 Output
GPIOA->MODER |=(1U<<30);  // SET BIT 14 to 1
GPIOA->MODER &=~(1U<<31);  // SET BIT 15 to 0
}

void GPIOBoutput(void)
// Set up STM32F412G Discovery GPIO B = Output
{
// ENABLE CLOCK ACCESS TO GPIO B
RCC->IOPENR = RCC_IOPENR_GPIOBEN;
// Pin B0 Output
GPIOB->MODER |=(1U<<0);  // SET BIT 0 to 1
GPIOB->MODER &=~(1U<<1);  // SET BIT 1 to 0
// Pin B1 Output
GPIOB->MODER |=(1U<<2);  // SET BIT 2 to 1
GPIOB->MODER &=~(1U<<3);  // SET BIT 3 to 0
// Pin B2 Output
GPIOB->MODER |=(1U<<4);  // SET BIT 4 to 1
GPIOB->MODER &=~(1U<<5);  // SET BIT 5 to 0
// Pin B3 Output
GPIOB->MODER |=(1U<<6);  // SET BIT 6 to 1
GPIOB->MODER &=~(1U<<7);  // SET BIT 7 to 0
// Pin B4 Output
GPIOB->MODER |=(1U<<8);  // SET BIT 8 to 1
GPIOB->MODER &=~(1U<<9);  // SET BIT 9 to 0
// Pin B5 Output
GPIOB->MODER |=(1U<<10);  // SET BIT 10 to 1
GPIOB->MODER &=~(1U<<11);  // SET BIT 11 to 0
// Pin B6 Output
GPIOB->MODER |=(1U<<12);  // SET BIT 12 to 1
GPIOB->MODER &=~(1U<<13);  // SET BIT 13 to 0
// Pin B7 Output
GPIOB->MODER |=(1U<<14);  // SET BIT 14 to 1
GPIOB->MODER &=~(1U<<15);  // SET BIT 15 to 0
// Pin B8 Output
GPIOB->MODER |=(1U<<16);  // SET BIT 14 to 1
GPIOB->MODER &=~(1U<<17);  // SET BIT 15 to 0
// Pin B9 Output
GPIOB->MODER |=(1U<<18);  // SET BIT 14 to 1
GPIOB->MODER &=~(1U<<19);  // SET BIT 15 to 0
// Pin B10 Output
GPIOB->MODER |=(1U<<20);  // SET BIT 14 to 1
GPIOB->MODER &=~(1U<<21);  // SET BIT 15 to 0
// Pin B11 Output
GPIOB->MODER |=(1U<<22);  // SET BIT 14 to 1
GPIOB->MODER &=~(1U<<23);  // SET BIT 15 to 0
// Pin B12 Output
GPIOB->MODER |=(1U<<24);  // SET BIT 14 to 1
GPIOB->MODER &=~(1U<<25);  // SET BIT 15 to 0
// Pin B13 Output
GPIOB->MODER |=(1U<<26);  // SET BIT 14 to 1
GPIOB->MODER &=~(1U<<27);  // SET BIT 15 to 0
// Pin B14 Output
GPIOB->MODER |=(1U<<28);  // SET BIT 14 to 1
GPIOB->MODER &=~(1U<<29);  // SET BIT 15 to 0
// Pin B15 Output
GPIOB->MODER |=(1U<<30);  // SET BIT 14 to 1
GPIOB->MODER &=~(1U<<31);  // SET BIT 15 to 0
}

void GPIOCoutput(void)
// Set up STM32F412G Discovery GPIO C = Output
{
// ENABLE CLOCK ACCESS TO GPIO C
RCC->IOPENR = RCC_IOPENR_GPIOCEN;
// Pin C0 Output
GPIOC->MODER |=(1U<<0);  // SET BIT 0 to 1
GPIOC->MODER &=~(1U<<1);  // SET BIT 1 to 0
// Pin C1 Output
GPIOC->MODER |=(1U<<2);  // SET BIT 2 to 1
GPIOC->MODER &=~(1U<<3);  // SET BIT 3 to 0
// Pin C2 Output
GPIOC->MODER |=(1U<<4);  // SET BIT 4 to 1
GPIOC->MODER &=~(1U<<5);  // SET BIT 5 to 0
// Pin C3 Output
GPIOC->MODER |=(1U<<6);  // SET BIT 6 to 1
GPIOC->MODER &=~(1U<<7);  // SET BIT 7 to 0
// Pin C4 Output
GPIOC->MODER |=(1U<<8);  // SET BIT 8 to 1
GPIOC->MODER &=~(1U<<9);  // SET BIT 9 to 0
// Pin C5 Output
GPIOC->MODER |=(1U<<10);  // SET BIT 10 to 1
GPIOC->MODER &=~(1U<<11);  // SET BIT 11 to 0
// Pin C6 Output
GPIOC->MODER |=(1U<<12);  // SET BIT 12 to 1
GPIOC->MODER &=~(1U<<13);  // SET BIT 13 to 0
// Pin C7 Output
GPIOC->MODER |=(1U<<14);  // SET BIT 14 to 1
GPIOC->MODER &=~(1U<<15);  // SET BIT 15 to 0
// Pin C8 Output
GPIOC->MODER |=(1U<<16);  // SET BIT 14 to 1
GPIOC->MODER &=~(1U<<17);  // SET BIT 15 to 0
// Pin C9 Output
GPIOC->MODER |=(1U<<18);  // SET BIT 14 to 1
GPIOC->MODER &=~(1U<<19);  // SET BIT 15 to 0
// Pin C10 Output
GPIOC->MODER |=(1U<<20);  // SET BIT 14 to 1
GPIOC->MODER &=~(1U<<21);  // SET BIT 15 to 0
// Pin C11 Output
GPIOC->MODER |=(1U<<22);  // SET BIT 14 to 1
GPIOC->MODER &=~(1U<<23);  // SET BIT 15 to 0
// Pin C12 Output
GPIOC->MODER |=(1U<<24);  // SET BIT 14 to 1
GPIOC->MODER &=~(1U<<25);  // SET BIT 15 to 0
// Pin C13 Output
GPIOC->MODER |=(1U<<26);  // SET BIT 14 to 1
GPIOC->MODER &=~(1U<<27);  // SET BIT 15 to 0
// Pin C14 Output
GPIOC->MODER |=(1U<<28);  // SET BIT 14 to 1
GPIOC->MODER &=~(1U<<29);  // SET BIT 15 to 0
// Pin C15 Output
GPIOC->MODER |=(1U<<30);  // SET BIT 14 to 1
GPIOC->MODER &=~(1U<<31);  // SET BIT 15 to 0
}

void GPIODoutput(void)
// Set up STM32F412G Discovery GPIO D = Output
{
// ENABLE CLOCK ACCESS TO GPIO D
RCC->IOPENR = RCC_IOPENR_GPIODEN;
// Pin D0 Output
GPIOD->MODER |=(1U<<0);  // SET BIT 0 to 1
GPIOD->MODER &=~(1U<<1);  // SET BIT 1 to 0
// Pin D1 Output
GPIOD->MODER |=(1U<<2);  // SET BIT 2 to 1
GPIOD->MODER &=~(1U<<3);  // SET BIT 3 to 0
// Pin D2 Output
GPIOD->MODER |=(1U<<4);  // SET BIT 4 to 1
GPIOD->MODER &=~(1U<<5);  // SET BIT 5 to 0
// Pin D3 Output
GPIOD->MODER |=(1U<<6);  // SET BIT 6 to 1
GPIOD->MODER &=~(1U<<7);  // SET BIT 7 to 0
// Pin D4 Output
GPIOD->MODER |=(1U<<8);  // SET BIT 8 to 1
GPIOD->MODER &=~(1U<<9);  // SET BIT 9 to 0
// Pin D5 Output
GPIOD->MODER |=(1U<<10);  // SET BIT 10 to 1
GPIOD->MODER &=~(1U<<11);  // SET BIT 11 to 0
// Pin D6 Output
GPIOD->MODER |=(1U<<12);  // SET BIT 12 to 1
GPIOD->MODER &=~(1U<<13);  // SET BIT 13 to 0
// Pin D7 Output
GPIOD->MODER |=(1U<<14);  // SET BIT 14 to 1
GPIOD->MODER &=~(1U<<15);  // SET BIT 15 to 0
// Pin D8 Output
GPIOD->MODER |=(1U<<16);  // SET BIT 14 to 1
GPIOD->MODER &=~(1U<<17);  // SET BIT 15 to 0
// Pin D9 Output
GPIOD->MODER |=(1U<<18);  // SET BIT 14 to 1
GPIOD->MODER &=~(1U<<19);  // SET BIT 15 to 0
// Pin D10 Output
GPIOD->MODER |=(1U<<20);  // SET BIT 14 to 1
GPIOD->MODER &=~(1U<<21);  // SET BIT 15 to 0
// Pin D11 Output
GPIOD->MODER |=(1U<<22);  // SET BIT 14 to 1
GPIOD->MODER &=~(1U<<23);  // SET BIT 15 to 0
// Pin D12 Output
GPIOD->MODER |=(1U<<24);  // SET BIT 14 to 1
GPIOD->MODER &=~(1U<<25);  // SET BIT 15 to 0
// Pin D13 Output
GPIOD->MODER |=(1U<<26);  // SET BIT 14 to 1
GPIOD->MODER &=~(1U<<27);  // SET BIT 15 to 0
// Pin D14 Output
GPIOD->MODER |=(1U<<28);  // SET BIT 14 to 1
GPIOD->MODER &=~(1U<<29);  // SET BIT 15 to 0
// Pin D15 Output
GPIOD->MODER |=(1U<<30);  // SET BIT 14 to 1
GPIOD->MODER &=~(1U<<31);  // SET BIT 15 to 0
}

void GPIOAinput(void)
// Set up STM32F412G Discovery GPIO A = Input
{
// ENABLE CLOCK ACCESS TO GPIO A
RCC->IOPENR = RCC_IOPENR_GPIOAEN;
// Pin A0 Input
GPIOA->MODER &=~(1U<<0);  // SET BIT 0 to 0
GPIOA->MODER &=~(1U<<1);  // SET BIT 1 to 0
// Pin A1 Input
GPIOA->MODER &=~(1U<<2);  // SET BIT 2 to 0
GPIOA->MODER &=~(1U<<3);  // SET BIT 3 to 0
// Pin A2 Input
GPIOA->MODER &=~(1U<<4);  // SET BIT 4 to 0
GPIOA->MODER &=~(1U<<5);  // SET BIT 5 to 0
// Pin A3 Input
GPIOA->MODER &=~(1U<<6);  // SET BIT 6 to 0
GPIOA->MODER &=~(1U<<7);  // SET BIT 7 to 0
// Pin A4 Input
GPIOA->MODER &=~(1U<<8);  // SET BIT 8 to 0
GPIOA->MODER &=~(1U<<9);  // SET BIT 9 to 0
// Pin A5 Input
GPIOA->MODER &=~(1U<<10);  // SET BIT 10 to 0
GPIOA->MODER &=~(1U<<11);  // SET BIT 11 to 0
// Pin A6 Input
GPIOA->MODER &=~(1U<<12);  // SET BIT 12 to 0
GPIOA->MODER &=~(1U<<13);  // SET BIT 13 to 0
// Pin A7 Input
GPIOA->MODER &=~(1U<<14);  // SET BIT 14 to 0
GPIOA->MODER &=~(1U<<15);  // SET BIT 15 to 0
// Pin A8 Input
GPIOA->MODER &=~(1U<<16);  // SET BIT 14 to 0
GPIOA->MODER &=~(1U<<17);  // SET BIT 15 to 0
// Pin A9 Input
GPIOA->MODER &=~(1U<<18);  // SET BIT 14 to 0
GPIOA->MODER &=~(1U<<19);  // SET BIT 15 to 0
// Pin A10 Input
GPIOA->MODER &=~(1U<<20);  // SET BIT 14 to 0
GPIOA->MODER &=~(1U<<21);  // SET BIT 15 to 0
// Pin A11 Input
GPIOA->MODER &=~(1U<<22);  // SET BIT 14 to 0
GPIOA->MODER &=~(1U<<23);  // SET BIT 15 to 0
// Pin A12 Input
GPIOA->MODER &=~(1U<<24);  // SET BIT 14 to 0
GPIOA->MODER &=~(1U<<25);  // SET BIT 15 to 0
// Pin A13 Input
GPIOA->MODER &=~(1U<<26);  // SET BIT 14 to 0
GPIOA->MODER &=~(1U<<27);  // SET BIT 15 to 0
// Pin A14 Input
GPIOA->MODER &=~(1U<<28);  // SET BIT 14 to 0
GPIOA->MODER &=~(1U<<29);  // SET BIT 15 to 0
// Pin A15 Input
GPIOA->MODER &=~(1U<<30);  // SET BIT 14 to 0
GPIOA->MODER &=~(1U<<31);  // SET BIT 15 to 0

/*
// Pin A0 Pull Up Input
GPIOA->PUPDR |=(1U<<0);  // SET BIT 0 to 0
GPIOA->PUPDR &=~(1U<<1);  // SET BIT 1 to 1
// Pin A1 Pull Up Input
GPIOA->PUPDR |=(1U<<2);  // SET BIT 2 to 0
GPIOA->PUPDR &=~(1U<<3);  // SET BIT 3 to 1
// Pin A2 Pull Up Input
GPIOA->PUPDR |=(1U<<4);  // SET BIT 4 to 0
GPIOA->PUPDR &=~(1U<<5);  // SET BIT 5 to 1
// Pin A3 Pull Up Input
GPIOA->PUPDR |=(1U<<6);  // SET BIT 6 to 0
GPIOA->PUPDR &=~(1U<<7);  // SET BIT 7 to 1
// Pin A4 Pull Up Input
GPIOA->PUPDR |=(1U<<8);  // SET BIT 8 to 0
GPIOA->PUPDR &=~(1U<<9);  // SET BIT 9 to 1
// Pin A5 Pull Up Input
GPIOA->PUPDR |=(1U<<10);  // SET BIT 10 to 0
GPIOA->PUPDR &=~(1U<<11);  // SET BIT 11 to 1
// Pin A6 Pull Up Input
GPIOA->PUPDR |=(1U<<12);  // SET BIT 12 to 0
GPIOA->PUPDR &=~(1U<<13);  // SET BIT 13 to 1
// Pin A7 Pull Up Input
GPIOA->PUPDR |=(1U<<14);  // SET BIT 14 to 0
GPIOA->PUPDR &=~(1U<<15);  // SET BIT 15 to 1
// Pin A8 Pull Up Input
GPIOA->PUPDR |=(1U<<16);  // SET BIT 16 to 0
GPIOA->PUPDR &=~(1U<<17);  // SET BIT 17 to 1
// Pin A9 Pull Up Input
GPIOA->PUPDR |=(1U<<18);  // SET BIT 18 to 0
GPIOA->PUPDR &=~(1U<<19);  // SET BIT 19 to 1
// Pin A10 Pull Up Input
GPIOA->PUPDR |=(1U<<20);  // SET BIT 20 to 0
GPIOA->PUPDR &=~(1U<<21);  // SET BIT 21 to 1
// Pin A11 Pull Up Input
GPIOA->PUPDR |=(1U<<22);  // SET BIT 22 to 0
GPIOA->PUPDR &=~(1U<<23);  // SET BIT 23 to 1
// Pin A12 Pull Up Input
GPIOA->PUPDR |=(1U<<24);  // SET BIT 24 to 0
GPIOA->PUPDR &=~(1U<<25);  // SET BIT 25 to 1
// Pin A13 Pull Up Input
GPIOA->PUPDR |=(1U<<26);  // SET BIT 26 to 0
GPIOA->PUPDR &=~(1U<<27);  // SET BIT 27 to 1
// Pin A14 Pull Up Input
GPIOA->PUPDR |=(1U<<28);  // SET BIT 28 to 0
GPIOA->PUPDR &=~(1U<<29);  // SET BIT 29 to 1
// Pin A15 Pull Up Input
GPIOA->PUPDR |=(1U<<30);  // SET BIT 30 to 0
GPIOA->PUPDR &=~(1U<<31);  // SET BIT 31 to 1
*/

/*
// Pin A0 Pull Down Input
GPIOA->PUPDR &=~(1U<<0);  // SET BIT 0 to 0
GPIOA->PUPDR |=(1U<<1);  // SET BIT 1 to 1
// Pin A1 Pull Down Input
GPIOA->PUPDR &=~(1U<<2);  // SET BIT 2 to 0
GPIOA->PUPDR |=(1U<<3);  // SET BIT 3 to 1
// Pin A2 Pull Down Input
GPIOA->PUPDR &=~(1U<<4);  // SET BIT 4 to 0
GPIOA->PUPDR |=(1U<<5);  // SET BIT 5 to 1
// Pin A3 Pull Down Input
GPIOA->PUPDR &=~(1U<<6);  // SET BIT 6 to 0
GPIOA->PUPDR |=(1U<<7);  // SET BIT 7 to 1
// Pin A4 Pull Down Input
GPIOA->PUPDR &=~(1U<<8);  // SET BIT 8 to 0
GPIOA->PUPDR |=(1U<<9);  // SET BIT 9 to 1
// Pin A5 Pull Down Input
GPIOA->PUPDR &=~(1U<<10);  // SET BIT 10 to 0
GPIOA->PUPDR |=(1U<<11);  // SET BIT 11 to 1
// Pin A6 Pull Down Input
GPIOA->PUPDR &=~(1U<<12);  // SET BIT 12 to 0
GPIOA->PUPDR |=(1U<<13);  // SET BIT 13 to 1
// Pin A7 Pull Down Input
GPIOA->PUPDR &=~(1U<<14);  // SET BIT 14 to 0
GPIOA->PUPDR |=(1U<<15);  // SET BIT 15 to 1
// Pin A8 Pull Down Input
GPIOA->PUPDR &=~(1U<<16);  // SET BIT 16 to 0
GPIOA->PUPDR |=(1U<<17);  // SET BIT 17 to 1
// Pin A9 Pull Down Input
GPIOA->PUPDR &=~(1U<<18);  // SET BIT 18 to 0
GPIOA->PUPDR |=(1U<<19);  // SET BIT 19 to 1
// Pin A10 Pull Down Input
GPIOA->PUPDR &=~(1U<<20);  // SET BIT 20 to 0
GPIOA->PUPDR |=(1U<<21);  // SET BIT 21 to 1
// Pin A11 Pull Down Input
GPIOA->PUPDR &=~(1U<<22);  // SET BIT 22 to 0
GPIOA->PUPDR |=(1U<<23);  // SET BIT 23 to 1
// Pin A12 Pull Up Input
GPIOA->PUPDR &=~(1U<<24);  // SET BIT 24 to 0
GPIOA->PUPDR |=(1U<<25);  // SET BIT 25 to 1
// Pin A13 Pull Down Input
GPIOA->PUPDR &=~(1U<<26);  // SET BIT 26 to 0
GPIOA->PUPDR |=(1U<<27);  // SET BIT 27 to 1
// Pin A14 Pull Down Input
GPIOA->PUPDR &=~(1U<<28);  // SET BIT 28 to 0
GPIOA->PUPDR |=(1U<<29);  // SET BIT 29 to 1
// Pin A15 Pull Down Input
GPIOA->PUPDR &=~(1U<<30);  // SET BIT 30 to 0
GPIOA->PUPDR |=(1U<<31);  // SET BIT 31 to 1
*/
}

void GPIOBinput(void)
// Set up STM32F412G Discovery GPIO B = Input
{
// ENABLE CLOCK ACCESS TO GPIO B
RCC->IOPENR = RCC_IOPENR_GPIOBEN;
// Pin B0 Input
GPIOB->MODER &=~(1U<<0);  // SET BIT 0 to 0
GPIOB->MODER &=~(1U<<1);  // SET BIT 1 to 0
// Pin B1 Input
GPIOB->MODER &=~(1U<<2);  // SET BIT 2 to 0
GPIOB->MODER &=~(1U<<3);  // SET BIT 3 to 0
// Pin B2 Input
GPIOB->MODER &=~(1U<<4);  // SET BIT 4 to 0
GPIOB->MODER &=~(1U<<5);  // SET BIT 5 to 0
// Pin B3 Input
GPIOB->MODER &=~(1U<<6);  // SET BIT 6 to 0
GPIOB->MODER &=~(1U<<7);  // SET BIT 7 to 0
// Pin B4 Input
GPIOB->MODER &=~(1U<<8);  // SET BIT 8 to 0
GPIOB->MODER &=~(1U<<9);  // SET BIT 9 to 0
// Pin B5 Input
GPIOB->MODER &=~(1U<<10);  // SET BIT 10 to 0
GPIOB->MODER &=~(1U<<11);  // SET BIT 11 to 0
// Pin B6 Input
GPIOB->MODER &=~(1U<<12);  // SET BIT 12 to 0
GPIOB->MODER &=~(1U<<13);  // SET BIT 13 to 0
// Pin B7 Input
GPIOB->MODER &=~(1U<<14);  // SET BIT 14 to 0
GPIOB->MODER &=~(1U<<15);  // SET BIT 15 to 0
// Pin B8 Input
GPIOB->MODER &=~(1U<<16);  // SET BIT 14 to 0
GPIOB->MODER &=~(1U<<17);  // SET BIT 15 to 0
// Pin B9 Input
GPIOB->MODER &=~(1U<<18);  // SET BIT 14 to 0
GPIOB->MODER &=~(1U<<19);  // SET BIT 15 to 0
// Pin B10 Input
GPIOB->MODER &=~(1U<<20);  // SET BIT 14 to 0
GPIOB->MODER &=~(1U<<21);  // SET BIT 15 to 0
// Pin B11 Input
GPIOB->MODER &=~(1U<<22);  // SET BIT 14 to 0
GPIOB->MODER &=~(1U<<23);  // SET BIT 15 to 0
// Pin B12 Input
GPIOB->MODER &=~(1U<<24);  // SET BIT 14 to 0
GPIOB->MODER &=~(1U<<25);  // SET BIT 15 to 0
// Pin B13 Input
GPIOB->MODER &=~(1U<<26);  // SET BIT 14 to 0
GPIOB->MODER &=~(1U<<27);  // SET BIT 15 to 0
// Pin B14 Input
GPIOB->MODER &=~(1U<<28);  // SET BIT 14 to 0
GPIOB->MODER &=~(1U<<29);  // SET BIT 15 to 0
// Pin B15 Input
GPIOB->MODER &=~(1U<<30);  // SET BIT 14 to 0
GPIOB->MODER &=~(1U<<31);  // SET BIT 15 to 0

/*
// Pin B0 Pull Up Input
GPIOB->PUPDR |=(1U<<0);  // SET BIT 0 to 0
GPIOB->PUPDR &=~(1U<<1);  // SET BIT 1 to 1
// Pin B1 Pull Up Input
GPIOB->PUPDR |=(1U<<2);  // SET BIT 2 to 0
GPIOB->PUPDR &=~(1U<<3);  // SET BIT 3 to 1
// Pin B2 Pull Up Input
GPIOB->PUPDR |=(1U<<4);  // SET BIT 4 to 0
GPIOB->PUPDR &=~(1U<<5);  // SET BIT 5 to 1
// Pin B3 Pull Up Input
GPIOB->PUPDR |=(1U<<6);  // SET BIT 6 to 0
GPIOB->PUPDR &=~(1U<<7);  // SET BIT 7 to 1
// Pin B4 Pull Up Input
GPIOB->PUPDR |=(1U<<8);  // SET BIT 8 to 0
GPIOB->PUPDR &=~(1U<<9);  // SET BIT 9 to 1
// Pin B5 Pull Up Input
GPIOB->PUPDR |=(1U<<10);  // SET BIT 10 to 0
GPIOB->PUPDR &=~(1U<<11);  // SET BIT 11 to 1
// Pin B6 Pull Up Input
GPIOB->PUPDR |=(1U<<12);  // SET BIT 12 to 0
GPIOB->PUPDR &=~(1U<<13);  // SET BIT 13 to 1
// Pin B7 Pull Up Input
GPIOB->PUPDR |=(1U<<14);  // SET BIT 14 to 0
GPIOB->PUPDR &=~(1U<<15);  // SET BIT 15 to 1
// Pin B8 Pull Up Input
GPIOB->PUPDR |=(1U<<16);  // SET BIT 16 to 0
GPIOB->PUPDR &=~(1U<<17);  // SET BIT 17 to 1
// Pin B9 Pull Up Input
GPIOB->PUPDR |=(1U<<18);  // SET BIT 18 to 0
GPIOB->PUPDR &=~(1U<<19);  // SET BIT 19 to 1
// Pin B10 Pull Up Input
GPIOB->PUPDR |=(1U<<20);  // SET BIT 20 to 0
GPIOB->PUPDR &=~(1U<<21);  // SET BIT 21 to 1
// Pin B11 Pull Up Input
GPIOB->PUPDR |=(1U<<22);  // SET BIT 22 to 0
GPIOB->PUPDR &=~(1U<<23);  // SET BIT 23 to 1
// Pin B12 Pull Up Input
GPIOB->PUPDR |=(1U<<24);  // SET BIT 24 to 0
GPIOB->PUPDR &=~(1U<<25);  // SET BIT 25 to 1
// Pin B13 Pull Up Input
GPIOB->PUPDR |=(1U<<26);  // SET BIT 26 to 0
GPIOB->PUPDR &=~(1U<<27);  // SET BIT 27 to 1
// Pin B14 Pull Up Input
GPIOB->PUPDR |=(1U<<28);  // SET BIT 28 to 0
GPIOB->PUPDR &=~(1U<<29);  // SET BIT 29 to 1
// Pin B15 Pull Up Input
GPIOB->PUPDR |=(1U<<30);  // SET BIT 30 to 0
GPIOB->PUPDR &=~(1U<<31);  // SET BIT 31 to 1
*/

/*
// Pin B0 Pull Down Input
GPIOB->PUPDR &=~(1U<<0);  // SET BIT 0 to 0
GPIOB->PUPDR |=(1U<<1);  // SET BIT 1 to 1
// Pin B1 Pull Down Input
GPIOB->PUPDR &=~(1U<<2);  // SET BIT 2 to 0
GPIOB->PUPDR |=(1U<<3);  // SET BIT 3 to 1
// Pin B2 Pull Down Input
GPIOB->PUPDR &=~(1U<<4);  // SET BIT 4 to 0
GPIOB->PUPDR |=(1U<<5);  // SET BIT 5 to 1
// Pin B3 Pull Down Input
GPIOB->PUPDR &=~(1U<<6);  // SET BIT 6 to 0
GPIOB->PUPDR |=(1U<<7);  // SET BIT 7 to 1
// Pin B4 Pull Down Input
GPIOB->PUPDR &=~(1U<<8);  // SET BIT 8 to 0
GPIOB->PUPDR |=(1U<<9);  // SET BIT 9 to 1
// Pin B5 Pull Down Input
GPIOB->PUPDR &=~(1U<<10);  // SET BIT 10 to 0
GPIOB->PUPDR |=(1U<<11);  // SET BIT 11 to 1
// Pin B6 Pull Down Input
GPIOB->PUPDR &=~(1U<<12);  // SET BIT 12 to 0
GPIOB->PUPDR |=(1U<<13);  // SET BIT 13 to 1
// Pin B7 Pull Down Input
GPIOB->PUPDR &=~(1U<<14);  // SET BIT 14 to 0
GPIOB->PUPDR |=(1U<<15);  // SET BIT 15 to 1
// Pin B8 Pull Down Input
GPIOB->PUPDR &=~(1U<<16);  // SET BIT 16 to 0
GPIOB->PUPDR |=(1U<<17);  // SET BIT 17 to 1
// Pin B9 Pull Down Input
GPIOB->PUPDR &=~(1U<<18);  // SET BIT 18 to 0
GPIOB->PUPDR |=(1U<<19);  // SET BIT 19 to 1
// Pin B10 Pull Down Input
GPIOB->PUPDR &=~(1U<<20);  // SET BIT 20 to 0
GPIOB->PUPDR |=(1U<<21);  // SET BIT 21 to 1
// Pin B11 Pull Down Input
GPIOB->PUPDR &=~(1U<<22);  // SET BIT 22 to 0
GPIOB->PUPDR |=(1U<<23);  // SET BIT 23 to 1
// Pin B12 Pull Up Input
GPIOB->PUPDR &=~(1U<<24);  // SET BIT 24 to 0
GPIOB->PUPDR |=(1U<<25);  // SET BIT 25 to 1
// Pin B13 Pull Down Input
GPIOB->PUPDR &=~(1U<<26);  // SET BIT 26 to 0
GPIOB->PUPDR |=(1U<<27);  // SET BIT 27 to 1
// Pin B14 Pull Down Input
GPIOB->PUPDR &=~(1U<<28);  // SET BIT 28 to 0
GPIOB->PUPDR |=(1U<<29);  // SET BIT 29 to 1
// Pin B15 Pull Down Input
GPIOB->PUPDR &=~(1U<<30);  // SET BIT 30 to 0
GPIOB->PUPDR |=(1U<<31);  // SET BIT 31 to 1
*/
}

void GPIOCinput(void)
// Set up STM32F412G Discovery GPIO C = Input
{
// ENABLE CLOCK ACCESS TO GPIO C
RCC->IOPENR = RCC_IOPENR_GPIOCEN;
// Pin C0 Input
GPIOC->MODER &=~(1U<<0);  // SET BIT 0 to 0
GPIOC->MODER &=~(1U<<1);  // SET BIT 1 to 0
// Pin C1 Input
GPIOC->MODER &=~(1U<<2);  // SET BIT 2 to 0
GPIOC->MODER &=~(1U<<3);  // SET BIT 3 to 0
// Pin C2 Input
GPIOC->MODER &=~(1U<<4);  // SET BIT 4 to 0
GPIOC->MODER &=~(1U<<5);  // SET BIT 5 to 0
// Pin C3 Input
GPIOC->MODER &=~(1U<<6);  // SET BIT 6 to 0
GPIOC->MODER &=~(1U<<7);  // SET BIT 7 to 0
// Pin C4 Input
GPIOC->MODER &=~(1U<<8);  // SET BIT 8 to 0
GPIOC->MODER &=~(1U<<9);  // SET BIT 9 to 0
// Pin C5 Input
GPIOC->MODER &=~(1U<<10);  // SET BIT 10 to 0
GPIOC->MODER &=~(1U<<11);  // SET BIT 11 to 0
// Pin C6 Input
GPIOC->MODER &=~(1U<<12);  // SET BIT 12 to 0
GPIOC->MODER &=~(1U<<13);  // SET BIT 13 to 0
// Pin C7 Input
GPIOC->MODER &=~(1U<<14);  // SET BIT 14 to 0
GPIOC->MODER &=~(1U<<15);  // SET BIT 15 to 0
// Pin C8 Input
GPIOC->MODER &=~(1U<<16);  // SET BIT 14 to 0
GPIOC->MODER &=~(1U<<17);  // SET BIT 15 to 0
// Pin C9 Input
GPIOC->MODER &=~(1U<<18);  // SET BIT 14 to 0
GPIOC->MODER &=~(1U<<19);  // SET BIT 15 to 0
// Pin C10 Input
GPIOC->MODER &=~(1U<<20);  // SET BIT 14 to 0
GPIOC->MODER &=~(1U<<21);  // SET BIT 15 to 0
// Pin C11 Input
GPIOC->MODER &=~(1U<<22);  // SET BIT 14 to 0
GPIOC->MODER &=~(1U<<23);  // SET BIT 15 to 0
// Pin C12 Input
GPIOC->MODER &=~(1U<<24);  // SET BIT 14 to 0
GPIOC->MODER &=~(1U<<25);  // SET BIT 15 to 0
// Pin C13 Input
GPIOC->MODER &=~(1U<<26);  // SET BIT 14 to 0
GPIOC->MODER &=~(1U<<27);  // SET BIT 15 to 0
// Pin C14 Input
GPIOC->MODER &=~(1U<<28);  // SET BIT 14 to 0
GPIOC->MODER &=~(1U<<29);  // SET BIT 15 to 0
// Pin C15 Input
GPIOC->MODER &=~(1U<<30);  // SET BIT 14 to 0
GPIOC->MODER &=~(1U<<31);  // SET BIT 15 to 0

/*
// Pin C0 Pull Up Input
GPIOC->PUPDR |=(1U<<0);  // SET BIT 0 to 0
GPIOC->PUPDR &=~(1U<<1);  // SET BIT 1 to 1
// Pin C1 Pull Up Input
GPIOC->PUPDR |=(1U<<2);  // SET BIT 2 to 0
GPIOC->PUPDR &=~(1U<<3);  // SET BIT 3 to 1
// Pin C2 Pull Up Input
GPIOC->PUPDR |=(1U<<4);  // SET BIT 4 to 0
GPIOC->PUPDR &=~(1U<<5);  // SET BIT 5 to 1
// Pin C3 Pull Up Input
GPIOC->PUPDR |=(1U<<6);  // SET BIT 6 to 0
GPIOC->PUPDR &=~(1U<<7);  // SET BIT 7 to 1
// Pin C4 Pull Up Input
GPIOC->PUPDR |=(1U<<8);  // SET BIT 8 to 0
GPIOC->PUPDR &=~(1U<<9);  // SET BIT 9 to 1
// Pin C5 Pull Up Input
GPIOC->PUPDR |=(1U<<10);  // SET BIT 10 to 0
GPIOC->PUPDR &=~(1U<<11);  // SET BIT 11 to 1
// Pin C6 Pull Up Input
GPIOC->PUPDR |=(1U<<12);  // SET BIT 12 to 0
GPIOC->PUPDR &=~(1U<<13);  // SET BIT 13 to 1
// Pin C7 Pull Up Input
GPIOC->PUPDR |=(1U<<14);  // SET BIT 14 to 0
GPIOC->PUPDR &=~(1U<<15);  // SET BIT 15 to 1
// Pin C8 Pull Up Input
GPIOC->PUPDR |=(1U<<16);  // SET BIT 16 to 0
GPIOC->PUPDR &=~(1U<<17);  // SET BIT 17 to 1
// Pin C9 Pull Up Input
GPIOC->PUPDR |=(1U<<18);  // SET BIT 18 to 0
GPIOC->PUPDR &=~(1U<<19);  // SET BIT 19 to 1
// Pin C10 Pull Up Input
GPIOC->PUPDR |=(1U<<20);  // SET BIT 20 to 0
GPIOC->PUPDR &=~(1U<<21);  // SET BIT 21 to 1
// Pin C11 Pull Up Input
GPIOC->PUPDR |=(1U<<22);  // SET BIT 22 to 0
GPIOC->PUPDR &=~(1U<<23);  // SET BIT 23 to 1
// Pin C12 Pull Up Input
GPIOC->PUPDR |=(1U<<24);  // SET BIT 24 to 0
GPIOC->PUPDR &=~(1U<<25);  // SET BIT 25 to 1
// Pin C13 Pull Up Input
GPIOC->PUPDR |=(1U<<26);  // SET BIT 26 to 0
GPIOC->PUPDR &=~(1U<<27);  // SET BIT 27 to 1
// Pin C14 Pull Up Input
GPIOC->PUPDR |=(1U<<28);  // SET BIT 28 to 0
GPIOC->PUPDR &=~(1U<<29);  // SET BIT 29 to 1
// Pin C15 Pull Up Input
GPIOC->PUPDR |=(1U<<30);  // SET BIT 30 to 0
GPIOC->PUPDR &=~(1U<<31);  // SET BIT 31 to 1
*/

/*
// Pin C0 Pull Down Input
GPIOC->PUPDR &=~(1U<<0);  // SET BIT 0 to 0
GPIOC->PUPDR |=(1U<<1);  // SET BIT 1 to 1
// Pin C1 Pull Down Input
GPIOC->PUPDR &=~(1U<<2);  // SET BIT 2 to 0
GPIOC->PUPDR |=(1U<<3);  // SET BIT 3 to 1
// Pin C2 Pull Down Input
GPIOC->PUPDR &=~(1U<<4);  // SET BIT 4 to 0
GPIOC->PUPDR |=(1U<<5);  // SET BIT 5 to 1
// Pin C3 Pull Down Input
GPIOC->PUPDR &=~(1U<<6);  // SET BIT 6 to 0
GPIOC->PUPDR |=(1U<<7);  // SET BIT 7 to 1
// Pin C4 Pull Down Input
GPIOC->PUPDR &=~(1U<<8);  // SET BIT 8 to 0
GPIOC->PUPDR |=(1U<<9);  // SET BIT 9 to 1
// Pin C5 Pull Down Input
GPIOC->PUPDR &=~(1U<<10);  // SET BIT 10 to 0
GPIOC->PUPDR |=(1U<<11);  // SET BIT 11 to 1
// Pin C6 Pull Down Input
GPIOC->PUPDR &=~(1U<<12);  // SET BIT 12 to 0
GPIOC->PUPDR |=(1U<<13);  // SET BIT 13 to 1
// Pin C7 Pull Down Input
GPIOC->PUPDR &=~(1U<<14);  // SET BIT 14 to 0
GPIOC->PUPDR |=(1U<<15);  // SET BIT 15 to 1
// Pin C8 Pull Down Input
GPIOC->PUPDR &=~(1U<<16);  // SET BIT 16 to 0
GPIOC->PUPDR |=(1U<<17);  // SET BIT 17 to 1
// Pin C9 Pull Down Input
GPIOC->PUPDR &=~(1U<<18);  // SET BIT 18 to 0
GPIOC->PUPDR |=(1U<<19);  // SET BIT 19 to 1
// Pin C10 Pull Down Input
GPIOC->PUPDR &=~(1U<<20);  // SET BIT 20 to 0
GPIOC->PUPDR |=(1U<<21);  // SET BIT 21 to 1
// Pin C11 Pull Down Input
GPIOC->PUPDR &=~(1U<<22);  // SET BIT 22 to 0
GPIOC->PUPDR |=(1U<<23);  // SET BIT 23 to 1
// Pin C12 Pull Up Input
GPIOC->PUPDR &=~(1U<<24);  // SET BIT 24 to 0
GPIOC->PUPDR |=(1U<<25);  // SET BIT 25 to 1
// Pin C13 Pull Down Input
GPIOC->PUPDR &=~(1U<<26);  // SET BIT 26 to 0
GPIOC->PUPDR |=(1U<<27);  // SET BIT 27 to 1
// Pin C14 Pull Down Input
GPIOC->PUPDR &=~(1U<<28);  // SET BIT 28 to 0
GPIOC->PUPDR |=(1U<<29);  // SET BIT 29 to 1
// Pin C15 Pull Down Input
GPIOC->PUPDR &=~(1U<<30);  // SET BIT 30 to 0
GPIOC->PUPDR |=(1U<<31);  // SET BIT 31 to 1
*/
}

void GPIODinput(void)
// Set up STM32F412G Discovery GPIO D = Input
{
// ENABLE CLOCK ACCESS TO GPIO D
RCC->IOPENR = RCC_IOPENR_GPIODEN;
// Pin D0 Input
GPIOD->MODER &=~(1U<<0);  // SET BIT 0 to 0
GPIOD->MODER &=~(1U<<1);  // SET BIT 1 to 0
// Pin D1 Input
GPIOD->MODER &=~(1U<<2);  // SET BIT 2 to 0
GPIOD->MODER &=~(1U<<3);  // SET BIT 3 to 0
// Pin D2 Input
GPIOD->MODER &=~(1U<<4);  // SET BIT 4 to 0
GPIOD->MODER &=~(1U<<5);  // SET BIT 5 to 0
// Pin D3 Input
GPIOD->MODER &=~(1U<<6);  // SET BIT 6 to 0
GPIOD->MODER &=~(1U<<7);  // SET BIT 7 to 0
// Pin D4 Input
GPIOD->MODER &=~(1U<<8);  // SET BIT 8 to 0
GPIOD->MODER &=~(1U<<9);  // SET BIT 9 to 0
// Pin D5 Input
GPIOD->MODER &=~(1U<<10);  // SET BIT 10 to 0
GPIOD->MODER &=~(1U<<11);  // SET BIT 11 to 0
// Pin D6 Input
GPIOD->MODER &=~(1U<<12);  // SET BIT 12 to 0
GPIOD->MODER &=~(1U<<13);  // SET BIT 13 to 0
// Pin D7 Input
GPIOD->MODER &=~(1U<<14);  // SET BIT 14 to 0
GPIOD->MODER &=~(1U<<15);  // SET BIT 15 to 0
// Pin D8 Input
GPIOD->MODER &=~(1U<<16);  // SET BIT 14 to 0
GPIOD->MODER &=~(1U<<17);  // SET BIT 15 to 0
// Pin D9 Input
GPIOD->MODER &=~(1U<<18);  // SET BIT 14 to 0
GPIOD->MODER &=~(1U<<19);  // SET BIT 15 to 0
// Pin D10 Input
GPIOD->MODER &=~(1U<<20);  // SET BIT 14 to 0
GPIOD->MODER &=~(1U<<21);  // SET BIT 15 to 0
// Pin D11 Input
GPIOD->MODER &=~(1U<<22);  // SET BIT 14 to 0
GPIOD->MODER &=~(1U<<23);  // SET BIT 15 to 0
// Pin D12 Input
GPIOD->MODER &=~(1U<<24);  // SET BIT 14 to 0
GPIOD->MODER &=~(1U<<25);  // SET BIT 15 to 0
// Pin D13 Input
GPIOD->MODER &=~(1U<<26);  // SET BIT 14 to 0
GPIOD->MODER &=~(1U<<27);  // SET BIT 15 to 0
// Pin D14 Input
GPIOD->MODER &=~(1U<<28);  // SET BIT 14 to 0
GPIOD->MODER &=~(1U<<29);  // SET BIT 15 to 0
// Pin D15 Input
GPIOD->MODER &=~(1U<<30);  // SET BIT 14 to 0
GPIOD->MODER &=~(1U<<31);  // SET BIT 15 to 0

/*
// Pin D0 Pull Up Input
GPIOD->PUPDR |=(1U<<0);  // SET BIT 0 to 0
GPIOD->PUPDR &=~(1U<<1);  // SET BIT 1 to 1
// Pin D1 Pull Up Input
GPIOD->PUPDR |=(1U<<2);  // SET BIT 2 to 0
GPIOD->PUPDR &=~(1U<<3);  // SET BIT 3 to 1
// Pin D2 Pull Up Input
GPIOD->PUPDR |=(1U<<4);  // SET BIT 4 to 0
GPIOD->PUPDR &=~(1U<<5);  // SET BIT 5 to 1
// Pin D3 Pull Up Input
GPIOD->PUPDR |=(1U<<6);  // SET BIT 6 to 0
GPIOD->PUPDR &=~(1U<<7);  // SET BIT 7 to 1
// Pin D4 Pull Up Input
GPIOD->PUPDR |=(1U<<8);  // SET BIT 8 to 0
GPIOD->PUPDR &=~(1U<<9);  // SET BIT 9 to 1
// Pin D5 Pull Up Input
GPIOD->PUPDR |=(1U<<10);  // SET BIT 10 to 0
GPIOD->PUPDR &=~(1U<<11);  // SET BIT 11 to 1
// Pin D6 Pull Up Input
GPIOD->PUPDR |=(1U<<12);  // SET BIT 12 to 0
GPIOD->PUPDR &=~(1U<<13);  // SET BIT 13 to 1
// Pin D7 Pull Up Input
GPIOD->PUPDR |=(1U<<14);  // SET BIT 14 to 0
GPIOD->PUPDR &=~(1U<<15);  // SET BIT 15 to 1
// Pin D8 Pull Up Input
GPIOD->PUPDR |=(1U<<16);  // SET BIT 16 to 0
GPIOD->PUPDR &=~(1U<<17);  // SET BIT 17 to 1
// Pin D9 Pull Up Input
GPIOD->PUPDR |=(1U<<18);  // SET BIT 18 to 0
GPIOD->PUPDR &=~(1U<<19);  // SET BIT 19 to 1
// Pin D10 Pull Up Input
GPIOD->PUPDR |=(1U<<20);  // SET BIT 20 to 0
GPIOD->PUPDR &=~(1U<<21);  // SET BIT 21 to 1
// Pin D11 Pull Up Input
GPIOD->PUPDR |=(1U<<22);  // SET BIT 22 to 0
GPIOD->PUPDR &=~(1U<<23);  // SET BIT 23 to 1
// Pin D12 Pull Up Input
GPIOD->PUPDR |=(1U<<24);  // SET BIT 24 to 0
GPIOD->PUPDR &=~(1U<<25);  // SET BIT 25 to 1
// Pin D13 Pull Up Input
GPIOD->PUPDR |=(1U<<26);  // SET BIT 26 to 0
GPIOD->PUPDR &=~(1U<<27);  // SET BIT 27 to 1
// Pin D14 Pull Up Input
GPIOD->PUPDR |=(1U<<28);  // SET BIT 28 to 0
GPIOD->PUPDR &=~(1U<<29);  // SET BIT 29 to 1
// Pin D15 Pull Up Input
GPIOD->PUPDR |=(1U<<30);  // SET BIT 30 to 0
GPIOD->PUPDR &=~(1U<<31);  // SET BIT 31 to 1
*/

/*
// Pin D0 Pull Down Input
GPIOD->PUPDR &=~(1U<<0);  // SET BIT 0 to 0
GPIOD->PUPDR |=(1U<<1);  // SET BIT 1 to 1
// Pin D1 Pull Down Input
GPIOD->PUPDR &=~(1U<<2);  // SET BIT 2 to 0
GPIOD->PUPDR |=(1U<<3);  // SET BIT 3 to 1
// Pin D2 Pull Down Input
GPIOD->PUPDR &=~(1U<<4);  // SET BIT 4 to 0
GPIOD->PUPDR |=(1U<<5);  // SET BIT 5 to 1
// Pin D3 Pull Down Input
GPIOD->PUPDR &=~(1U<<6);  // SET BIT 6 to 0
GPIOD->PUPDR |=(1U<<7);  // SET BIT 7 to 1
// Pin D4 Pull Down Input
GPIOD->PUPDR &=~(1U<<8);  // SET BIT 8 to 0
GPIOD->PUPDR |=(1U<<9);  // SET BIT 9 to 1
// Pin D5 Pull Down Input
GPIOD->PUPDR &=~(1U<<10);  // SET BIT 10 to 0
GPIOD->PUPDR |=(1U<<11);  // SET BIT 11 to 1
// Pin D6 Pull Down Input
GPIOD->PUPDR &=~(1U<<12);  // SET BIT 12 to 0
GPIOD->PUPDR |=(1U<<13);  // SET BIT 13 to 1
// Pin D7 Pull Down Input
GPIOD->PUPDR &=~(1U<<14);  // SET BIT 14 to 0
GPIOD->PUPDR |=(1U<<15);  // SET BIT 15 to 1
// Pin D8 Pull Down Input
GPIOD->PUPDR &=~(1U<<16);  // SET BIT 16 to 0
GPIOD->PUPDR |=(1U<<17);  // SET BIT 17 to 1
// Pin D9 Pull Down Input
GPIOD->PUPDR &=~(1U<<18);  // SET BIT 18 to 0
GPIOD->PUPDR |=(1U<<19);  // SET BIT 19 to 1
// Pin D10 Pull Down Input
GPIOD->PUPDR &=~(1U<<20);  // SET BIT 20 to 0
GPIOD->PUPDR |=(1U<<21);  // SET BIT 21 to 1
// Pin D11 Pull Down Input
GPIOD->PUPDR &=~(1U<<22);  // SET BIT 22 to 0
GPIOD->PUPDR |=(1U<<23);  // SET BIT 23 to 1
// Pin D12 Pull Up Input
GPIOD->PUPDR &=~(1U<<24);  // SET BIT 24 to 0
GPIOD->PUPDR |=(1U<<25);  // SET BIT 25 to 1
// Pin D13 Pull Down Input
GPIOD->PUPDR &=~(1U<<26);  // SET BIT 26 to 0
GPIOD->PUPDR |=(1U<<27);  // SET BIT 27 to 1
// Pin D14 Pull Down Input
GPIOD->PUPDR &=~(1U<<28);  // SET BIT 28 to 0
GPIOD->PUPDR |=(1U<<29);  // SET BIT 29 to 1
// Pin D15 Pull Down Input
GPIOD->PUPDR &=~(1U<<30);  // SET BIT 30 to 0
GPIOD->PUPDR |=(1U<<31);  // SET BIT 31 to 1
*/
}






