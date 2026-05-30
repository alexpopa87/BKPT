#ifndef __DHCSR_H
#define __DHCSR_H

#include "stdint.h"
#define DHCSR (*((volatile uint32_t *)(0xE000EDF0u)))
#define C_DEBUGEN 0x00000001u

#endif //__DHCSR_H