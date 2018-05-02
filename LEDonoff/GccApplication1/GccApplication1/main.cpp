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
		int a;
		int b;
		
		for(int i=0; i<7;i++)
		{
			PORTD=~(1<<i);
			_delay_ms(500);
		}
		for(int i=0; i<7;i++)
		{
			PORTD=~(0x80>>i);
			_delay_ms(500);
		}
<<<<<<< HEAD
		PORTD=0xff;
		_delay_ms(200);
		PORTD=0xff;
		_delay_ms(200);
PORTD=0xff;
_delay_ms(200);    }
=======
		
		PORTD=0xff;
		_delay_ms(900);
		PORTD=0x00;
		_delay_ms(900);
		
    }
>>>>>>> 0.5초딜레이
}

