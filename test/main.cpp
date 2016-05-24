

#include "hwlib.hpp"
#include "ostream"
int main( void ){     // kill the watchdog 
   WDT->WDT_MR = WDT_MR_WDDIS;   
     auto led0 = hwlib::target::pin_out( 1, 27 );   
     auto led1= hwlib::target::pin_out(2,22);
 auto sw = hwlib::target::pin_in_out( 2,23 );  
  auto sw2 = hwlib::target::pin_in_out( 1,25 );  

  sw.direction_set_input();  
    sw2.direction_set_input();  

   int stand = 0;
  while (1){
    bool knop = ( ! sw.get());
     void  x= led1.set(1);
     x;
      if(knop==true){
          if (stand==0){
              led0.set(1);
              stand = 1;
                    hwlib::wait_ms( 200 );

              
          }
          else{
              led0.set(0);
              stand =0;
                    hwlib::wait_ms( 200 );

          }
         }
                }






} 