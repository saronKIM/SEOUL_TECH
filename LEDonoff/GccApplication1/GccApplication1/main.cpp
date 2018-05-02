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

    /* Replace with your application code */
    while (1) 
    {
		for(int i=0; i<7;i++)
		{
			PORTD=~(1<<i);
			_delay_ms(400);
		}
		for(int i=0; i<7;i++)
		{
			PORTD=~(0x80>>i);
			_delay_ms(400);
		}
		PORTD=0xff;
		_delay_ms(200);
		PORTD=0xff;
		_delay_ms(200);
PORTD=0xff;
_delay_ms(200);    }
}

