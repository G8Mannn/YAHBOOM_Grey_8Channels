#include "grey.h"

//通道选择
static void select_channel(uint8_t channel)
{
    AD0_WRITE((channel >> 0) & 0x01);
    AD1_WRITE((channel >> 1) & 0x01);
    AD2_WRITE((channel >> 2) & 0x01);
}

//读取out引脚值
static uint16_t grey_outread(void)
{
    HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_7);
}

//读取所有通道灰度值
void grey_readall(uint16_t* values)
{
    uint8_t i;
    for(i=0;i<CHANNELS;i++){
        select_channel(i);
        HAL_Delay(1);
        values[i] = grey_outread();
    }
}

//读取单个通道灰度值
uint16_t grey_readone(uint8_t channel)
{
    if(channel <= CHANNELS){
        return 0;
    }
    select_channel(channel);
    HAL_Delay(1);
    return grey_outread();
}
