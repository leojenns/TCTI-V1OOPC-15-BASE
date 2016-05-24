

#include "hwlib.hpp"
#include "ostream"
int main( void ){     // kill the watchdog 
   WDT->WDT_MR = WDT_MR_WDDIS;   
     auto led0 = hwlib::target::pin_out( 1, 27 );   
    int sound;
    auto ge = hwlib::target::pin_in(0,16);
while (1){
sound = ge.adc.get();


 
  

  

   
  
    
     
     
      if(sound>10){
          
              led0.set(1);
      }
         else {
             led0.set(0);
         }
                }
  }
