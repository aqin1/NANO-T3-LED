#include "gpio.h"

void delay( unsigned int time )
{
	while(time--);
}

void main( void )
{
	GPIOBALTFN0 &= ~( 3 << 22 );
	GPIOBALTFN0 |= ( 2 << 22 );
	
	GPIOBALTFN0 &= ~( 3 << 24 );
	GPIOBALTFN0 |= ( 2 << 24 );
	
	GPIOBOUTENB |= ( 1 << 11 );
	GPIOBOUTENB |= ( 1 << 12 );
	
	GPIOBOUT |= ( 1 << 11 );
	GPIOBOUT &= ~( 1 << 12 );
	while( 1 )
	{
		GPIOBOUT |= ( 1 << 11 );
		GPIOBOUT &= ~( 1 << 12 );
		
		delay( 1250000 );
		
		GPIOBOUT &= ~ ( 1 << 11 );
		GPIOBOUT |= ( 1 << 12 );
		
		delay( 1250000 );
	}

}