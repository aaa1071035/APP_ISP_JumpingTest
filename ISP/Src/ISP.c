#include "ISP.h"

__asm void ISP_GoToResetHandler(unsigned long ulIVTAddress)
{
    LDR R1, [R0]
    MOV SP, R1
    LDR R0, [R0, #4]
    BLX R0
}
