/*
 * GccApplication1.cpp
 *
 * Created: 2018-05-02 오전 10:52:06
 * Author : stc_176
 */ 
#define F_CPU 16000000UL
#include <util/delay.h>
#include <avr/io.h>


int main(void)
{
	PORTD=0xff;
	DDRD=0xff;
	int a;
	int b;
    /* Replace with your application code */
    while (1) 
    {
		PORTD=0xff;
		_delay_ms(600);
		PORTD=0x00;
		_delay_ms(500);
    }
}

