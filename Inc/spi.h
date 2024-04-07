/*
 * spi.h
 *
 *  Created on: Apr 7, 2024
 *      Author: Pee
 */


#ifndef SPI_H_
#define SPI_H_

#include "stm32g0b1xx.h"
#include <stdint.h>

void SPI1_Init(void);
void SPI1_EnableSlave(void);
void SPI1_DisableSlave(void);
uint8_t SPI1_Write(uint8_t data);


#endif /* SPI_H_ */
