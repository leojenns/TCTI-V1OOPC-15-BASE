// blink a LED on pin pa5 
// (= green LED on nucleo board)
//
// This is a very simple blink-a-LED application.
// It aims to show direct use of the hardware rather than
// good programming practices (like abstracting from the pin
// used and using a timer for the delay).
//
// It uses the CMSIS header file to access the direction
// and value registers for pin.
// It uses a busy-wait for the delay, which can be affected
// by the compiler and optimization settings used.
//
// Note that after a reset the pin is automatically
// configured as GPIO, hence there is no need to configure
// the pin. Some other pins might NOT be configured to GPIO by a reset,
// hence blinking on such a pin requires the additional step of
// configuring the pin as GPIO.
//

// includes the cmsis definitions for the chip
#include "bmptk.h"
		
int main( void ){	

   // must be volatile to prevent optimization of the wait loops
   volatile int i;
   
   // enable port a clock
   RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN; // (1 << 0)
    
   // make the pin an output
   int temp = GPIOA->MODER;
   temp &= ~(0x03 << (5 * 2));
   temp |=  (0x01  << (5 * 2));
   GPIOA->MODER = temp;
   
   // loop forever
   while( 1 ){
   
      // make the pin high
      GPIOA->BSRRH = 1 << 5;
    
      // wait 
      for( i = 0; i < 100000; i++ ){ 
      }
	
      // make the pin low
      GPIOA->BSRRL = 1 << 5;

      // wait 
      for( i = 0; i < 100000; i++ ){
      }
	
	}     
}