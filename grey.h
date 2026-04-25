#ifndef __GREY_H
#define __GREY_H

#include "main.h"

#define CHANNELS 8

#define AD0_PIN GPIO_PIN_4
#define AD1_PIN GPIO_PIN_5
#define AD2_PIN GPIO_PIN_6

#define AD0_WRITE(state) HAL_GPIO_WritePin(GPIOA,AD0_PIN,(state)?GPIO_PIN_SET:GPIO_PIN_RESET)
#define AD1_WRITE(state) HAL_GPIO_WritePin(GPIOA,AD1_PIN,(state)?GPIO_PIN_SET:GPIO_PIN_RESET)
#define AD2_WRITE(state) HAL_GPIO_WritePin(GPIOA,AD2_PIN,(state)?GPIO_PIN_SET:GPIO_PIN_RESET)

static void select_channel(uint8_t channel);
static uint16_t grey_outread(void);
void grey_readall(uint16_t* values);
uint16_t grey_readone(uint8_t channel);

#endif
