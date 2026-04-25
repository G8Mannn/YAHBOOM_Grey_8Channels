#ifndef __GREY_H
#define __GREY_H

#include "main.h"

#define CHANNELS 8

#define AD0_WRITE(state) HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,(state)?GPIO_PIN_SET:GPIO_PIN_RESET)
#define AD1_WRITE(state) HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,(state)?GPIO_PIN_SET:GPIO_PIN_RESET)
#define AD2_WRITE(state) HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,(state)?GPIO_PIN_SET:GPIO_PIN_RESET)

static void select_channel(uint8_t channel);
static uint16_t grey_outread(void);
void grey_readall(uint16_t* values);
uint16_t grey_readone(uint8_t channel);

#endif
