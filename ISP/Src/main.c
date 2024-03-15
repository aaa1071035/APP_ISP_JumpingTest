#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include "ISP.h"
#include "stm32f207xx.h"
#include "System_config.h"
#include "IVT_Test.h"

void HardFault_Handler()
{
    while(1)
    {
    }
//    __nop();
}

void SysTick_Handler(void)
{
}

void delay(uint32_t ulDelayTime)
{
    while(ulDelayTime)
    {
        uint16_t uCount;
        ulDelayTime--;
        uCount=10;
        while(uCount--);
    }
}

void ISP_Handler(void)
{
    uint16_t i;

    printf("Hi ISPFunc\r\n");
    delay(10000);
    for(i=0; i<10; i++)
    {
        printf("ISPFunc counting! num: %d\r\n", i);
        delay(10000);
    }
    printf("Bye ISPFunc\r\n");
    NVIC_SetVectorTable(APP_IVT_POINTER_ADDRESS);
    ISP_GoToResetHandler(APP_IVT_POINTER_ADDRESS);
}

int main(void)
{
    uint16_t i;
    if(APP_IVT_POINTER_ADDRESS==NVIC_GetVectorTable())
    {
        ISP_Handler();
    }
    SystemClock_Config();
    printf("Hi ISP\r\n");
    delay(10000);
    for(i=0; i<10; i++)
    {
        printf("ISP counting! num: %d\r\n", i);
        delay(10000);
    }
    printf("Bye ISP\r\n");
    ISP_Handler();
    
    return 0;
}
