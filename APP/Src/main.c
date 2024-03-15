#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include "ISP.h"
#include "stm32f207xx.h"
#include "System_config.h"
#include "IVT_Test.h"

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

int main(void)
{
    uint16_t i;
    printf("Hi APP\r\n");
    delay(10000);
    for(i=0; i<10; i++)
    {
        printf("APP counting! num: %d\r\n", i);
        delay(10000);
    }
    printf("Bye APP\r\n");
    ISP_GoToResetHandler(ISP_IVT_POINTER_ADDRESS);
    
    return 0;
}
