/*
 * gpio.h
 *
 *  Created on: Jan 13, 2024
 *      Author: Pee
 */

#ifndef GPIO_H_
#define GPIO_H_

#include "stm32g0b1xx.h"
#include "main.h"


void GGPIOEoutputLED(void);
void GPIOAoutput(void);
void GPIOBoutput(void);
void GPIOCoutput(void);
void GPIODoutput(void);
void GPIOAinput(void);
void GPIOBinput(void);
void GPIOCinput(void);
void GPIODinput(void);
void GPIOEinput(void);

#endif /* GPIO_H_ */
