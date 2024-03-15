#include "IVT_Test.h"
#include <stdio.h>

void WWDG_IRQHandler(void)
{
    printf("WWDG_IRQHandler");
}
void PVD_IRQHandler(void)
{
    printf("PVD_IRQHandler");
}
void TAMP_STAMP_IRQHandler(void)
{
    printf("TAMP_STAMP_IRQHandler");
}
void RTC_WKUP_IRQHandler(void)
{
    printf("RTC_WKUP_IRQHandler");
}
void FLASH_IRQHandler(void)
{
    printf("FLASH_IRQHandler");
}
void RCC_IRQHandler(void)
{
    printf("RCC_IRQHandler");
}
void EXTI0_IRQHandler(void)
{
    printf("EXTI0_IRQHandler");
}
void EXTI1_IRQHandler(void)
{
    printf("EXTI1_IRQHandler");
}
void EXTI2_IRQHandler(void)
{
    printf("EXTI2_IRQHandler");
}
void EXTI3_IRQHandler(void)
{
    printf("EXTI3_IRQHandler");
}
void EXTI4_IRQHandler(void)
{
    printf("EXTI4_IRQHandler");
}
void DMA1_Stream0_IRQHandler(void)
{
    printf("DMA1_Stream0_IRQHandler");
}
void DMA1_Stream1_IRQHandler(void)
{
    printf("DMA1_Stream1_IRQHandler");
}
void DMA1_Stream2_IRQHandler(void)
{
    printf("DMA1_Stream2_IRQHandler");
}
void DMA1_Stream3_IRQHandler(void)
{
    printf("DMA1_Stream3_IRQHandler");
}
void DMA1_Stream4_IRQHandler(void)
{
    printf("DMA1_Stream4_IRQHandler");
}
void DMA1_Stream5_IRQHandler(void)
{
    printf("DMA1_Stream5_IRQHandler");
}
void DMA1_Stream6_IRQHandler(void)
{
    printf("DMA1_Stream6_IRQHandler");
}
void ADC_IRQHandler(void)
{
    printf("ADC_IRQHandler");
}
void CAN1_TX_IRQHandler(void)
{
    printf("CAN1_TX_IRQHandler");
}
void CAN1_RX0_IRQHandler(void)
{
    printf("CAN1_RX0_IRQHandler");
}
void CAN1_RX1_IRQHandler(void)
{
    printf("CAN1_RX1_IRQHandler");
}
void CAN1_SCE_IRQHandler(void)
{
    printf("CAN1_SCE_IRQHandler");
}
void EXTI9_5_IRQHandler(void)
{
    printf("EXTI9_5_IRQHandler");
}
void TIM1_BRK_TIM9_IRQHandler(void)
{
    printf("TIM1_BRK_TIM9_IRQHandler");
}
void TIM1_UP_TIM10_IRQHandler(void)
{
    printf("TIM1_UP_TIM10_IRQHandler");
}
void TIM1_TRG_COM_TIM11_IRQHandler(void)
{
    printf("TIM1_TRG_COM_TIM11_IRQHandler");
}
void TIM1_CC_IRQHandler(void)
{
    printf("TIM1_CC_IRQHandler");
}
void TIM3_IRQHandler(void)
{
    printf("TIM3_IRQHandler");
}
void TIM4_IRQHandler(void)
{
    printf("TIM4_IRQHandler");
}
void I2C1_EV_IRQHandler(void)
{
    printf("I2C1_EV_IRQHandler");
}
void I2C1_ER_IRQHandler(void)
{
    printf("I2C1_ER_IRQHandler");
}
void I2C2_EV_IRQHandler(void)
{
    printf("I2C2_EV_IRQHandler");
}
void I2C2_ER_IRQHandler(void)
{
    printf("I2C2_ER_IRQHandler");
}
void SPI1_IRQHandler(void)
{
    printf("I2C2_ER_IRQHandler");
}
void SPI2_IRQHandler(void)
{
    printf("SPI2_IRQHandler");
}
void USART1_IRQHandler(void)
{
    printf("USART1_IRQHandler");
}
void USART2_IRQHandler(void)
{
    printf("USART2_IRQHandler");
}
void USART3_IRQHandler(void)
{
    printf("USART3_IRQHandler");
}
void EXTI15_10_IRQHandler(void)
{
    printf("EXTI15_10_IRQHandler");
}
void RTC_Alarm_IRQHandler(void)
{
    printf("RTC_Alarm_IRQHandler");
}
void OTG_FS_WKUP_IRQHandler(void)
{
    printf("OTG_FS_WKUP_IRQHandler");
}
void TIM8_BRK_TIM12_IRQHandler(void)
{
    printf("TIM8_BRK_TIM12_IRQHandler");
}
void TIM8_UP_TIM13_IRQHandler(void)
{
    printf("TIM8_UP_TIM13_IRQHandler");
}
void TIM8_TRG_COM_TIM14_IRQHandler(void)
{
    printf("TIM8_TRG_COM_TIM14_IRQHandler");
}
void TIM8_CC_IRQHandler(void)
{
    printf("TIM8_CC_IRQHandler");
}
void DMA1_Stream7_IRQHandler(void)
{
    printf("DMA1_Stream7_IRQHandler");
}
void FSMC_IRQHandler(void)
{
    printf("FSMC_IRQHandler");
}
void SDIO_IRQHandler(void)
{
    printf("SDIO_IRQHandler");
}
void TIM5_IRQHandler(void)
{
    printf("TIM5_IRQHandler");
}
void SPI3_IRQHandler(void)
{
    printf("SPI3_IRQHandler");
}
void UART4_IRQHandler(void)
{
    printf("UART4_IRQHandler");
}
void UART5_IRQHandler(void)
{
    printf("UART5_IRQHandler");
}
void TIM6_DAC_IRQHandler(void)
{
    printf("TIM6_DAC_IRQHandler");
}
void TIM7_IRQHandler(void)
{
    printf("TIM7_IRQHandler");
}
void DMA2_Stream0_IRQHandler(void)
{
    printf("DMA2_Stream0_IRQHandler");
}
void DMA2_Stream1_IRQHandler(void)
{
    printf("DMA2_Stream1_IRQHandler");
}
void DMA2_Stream2_IRQHandler(void)
{
    printf("DMA2_Stream2_IRQHandler");
}
void DMA2_Stream3_IRQHandler(void)
{
    printf("DMA2_Stream3_IRQHandler");
}
void DMA2_Stream4_IRQHandler(void)
{
    printf("DMA2_Stream4_IRQHandler");
}
void ETH_IRQHandler(void)
{
    printf("ETH_IRQHandler");
}
void ETH_WKUP_IRQHandler(void)
{
    printf("ETH_WKUP_IRQHandler");
}
void CAN2_TX_IRQHandler(void)
{
    printf("CAN2_TX_IRQHandler");
}
void CAN2_RX0_IRQHandler(void)
{
    printf("CAN2_RX0_IRQHandler");
}
void CAN2_RX1_IRQHandler(void)
{
    printf("CAN2_RX1_IRQHandler");
}
void CAN2_SCE_IRQHandler(void)
{
    printf("CAN2_SCE_IRQHandler");
}
void OTG_FS_IRQHandler(void)
{
    printf("OTG_FS_IRQHandler");
}
void DMA2_Stream5_IRQHandler(void)
{
    printf("DMA2_Stream5_IRQHandler");
}
void DMA2_Stream6_IRQHandler(void)
{
    printf("DMA2_Stream6_IRQHandler");
}
void DMA2_Stream7_IRQHandler(void)
{
    printf("DMA2_Stream7_IRQHandler");
}
void USART6_IRQHandler(void)
{
    printf("USART6_IRQHandler");
}
void I2C3_EV_IRQHandler(void)
{
    printf("I2C3_EV_IRQHandler");
}
void I2C3_ER_IRQHandler(void)
{
    printf("I2C3_ER_IRQHandler");
}
void OTG_HS_EP1_OUT_IRQHandler(void)
{
    printf("OTG_HS_EP1_OUT_IRQHandler");
}
void OTG_HS_EP1_IN_IRQHandler(void)
{
    printf("OTG_HS_EP1_IN_IRQHandler");
}
void OTG_HS_WKUP_IRQHandler(void)
{
    printf("OTG_HS_WKUP_IRQHandler");
}
void OTG_HS_IRQHandler(void)
{
    printf("OTG_HS_IRQHandler");
}
void DCMI_IRQHandler(void)
{
    printf("DCMI_IRQHandler");
}
void HASH_RNG_IRQHandler(void)
{
    printf("HASH_RNG_IRQHandler");
}
