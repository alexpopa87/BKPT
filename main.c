#include "DHCSR.h"

int main(void)
{
    if( (DHCSR & C_DEBUGEN) == C_DEBUGEN)
    {
        asm("BKPT #0");
    }
    
    while(1);
    
    return 0;
}