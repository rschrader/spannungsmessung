

#include <common.h>
#include <util/delay.h>
#include <usart/usart.h>

int main(void)
{
    USART0_init();
    
    while (1) 
    {
        USART0_sendString("Hello World!\r\n");
        _delay_ms(500);
    }
}