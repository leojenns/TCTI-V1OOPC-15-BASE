
#include "hwlib.hpp"
int main(void)
{
	// kill the watchdog
   WDT->WDT_MR = WDT_MR_WDDIS;
     
 
     
     auto led0 = hwlib::target::pin_out(hwlib::target::pins::d27);
    auto led1 = hwlib::target::pin_out(hwlib::target::pins::d29);
    auto led2 = hwlib::target::pin_out(hwlib::target::pins::d34);
    auto led3 = hwlib::target::pin_out(hwlib::target::pins::d50);
    for(;;){
 /*   led0.set(1);
    led1.set(1);
      hwlib::wait_ms( 200 );
      led0.set(0);
      led2.set(1);
      hwlib::wait_ms( 200 );   
      led1.set(0);
      led3.set(1);
        hwlib::wait_ms( 200 );    
        led3.set(0);
        led1.set(1);
        hwlib::wait_ms(200);
        led2.set(0);*/
        
        led0.set(1);
        led1.set(1);
        hwlib::wait_ms(200);
        led0.set(0);
        led1.set(0);
        hwlib::wait_ms(200);
        led1.set(1);
        led2.set(1);
        hwlib::wait_ms(200);
         led1.set(0);
        led2.set(0);
        hwlib::wait_ms(200);
        led2.set(1);
        led3.set(1);
        hwlib::wait_ms(200);
        led3.set(0);
        led2.set(0);
        hwlib::wait_ms(200);
        led2.set(1);
        led1.set(1);
        hwlib::wait_ms(200);
        led2.set(0);
        led1.set(0);
        hwlib::wait_ms(200);
    } 
    
}

