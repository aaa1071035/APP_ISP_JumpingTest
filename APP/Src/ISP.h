#if (!defined(ISP_H_FILE_DEFINED))
#define ISP_H_FILE_DEFINED

#define ISP_IVT_POINTER_ADDRESS                         (0x8000000)
#define APP_IVT_POINTER_ADDRESS                         (0x800C000)
#define ISP_HANDLER_POINTER_ADDRESS                     (0x8002000)
typedef void (*PFISPHandler)(void);

void ISP_GoToResetHandler(unsigned long ulIVTAddress);

typedef struct
{
    const unsigned long CPUID;                      // Offset: 0x000 (R/ )  CPUID Base Register
    volatile unsigned long ICSR;                    // Offset: 0x004 (R/W)  Interrupt Control and State Register
    volatile unsigned long VTOR;                    // Offset: 0x008 (R/W)  Vector Table Offset Register
    volatile unsigned long AIRCR;                   // Offset: 0x00C (R/W)  Application Interrupt and Reset Control Register
    volatile unsigned long SCR;                     // Offset: 0x010 (R/W)  System Control Register
    volatile unsigned long CCR;                     // Offset: 0x014 (R/W)  Configuration Control Register
    unsigned long RESERVED1;
    volatile unsigned long SHP[2];                  // Offset: 0x01C (R/W)  System Handlers Priority Registers. [0] is RESERVED
    volatile unsigned long SHCSR;                   // Offset: 0x024 (R/W)  System Handler Control and State Register
} NVIC_SCB_Type_t;
#define NVIC_SetVectorTable(MEM_ADDRESS)            ((NVIC_SCB_Type_t*)(0xE000E000UL+0x0D00UL))->VTOR=(MEM_ADDRESS & (unsigned long)(~0x7F));
#define NVIC_GetVectorTable()                       (((NVIC_SCB_Type_t*)(0xE000E000UL+0x0D00UL))->VTOR)

#endif //#if (!defined(ISP_H_FILE_DEFINED))
