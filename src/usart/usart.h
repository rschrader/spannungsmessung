#pragma once

#include <common.h>

#define USART0_BAUD_RATE(BAUD_RATE) ((float)(F_CPU * 64 / (16 * (float)BAUD_RATE)) + 0.5)

void USART0_init(void);
void USART0_sendChar(char c);
void USART0_sendString(char *str);
