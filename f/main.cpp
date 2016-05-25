#include "hwlib.hpp"
#include "ostream"


int main( void ){     // kill the watchdog 
   WDT->WDT_MR = WDT_MR_WDDIS;   
     auto led0 = hwlib::target::pin_out( 1, 27 );   //d13
     auto led1= hwlib::target::pin_out(2,22);      //d8
    auto led2= hwlib::target::pin_out(2,28);    //d3
    auto led3= hwlib::target::pin_out(2,26);    //d4
   auto sw = hwlib::target::pin_in_out( 2,23 );  //d7
     auto sw2 = hwlib::target::pin_in_out( 1,25 );  //d2
  sw.direction_set_input();  
  sw2.direction_set_input();  
int count = 0;
  while (1){
      hwlib::wait_ms(200);
    bool knop = ( ! sw.get());
    bool knop2 = (!sw2.get());
      if(knop==1){
          
        if(count==0)
        {
        
        led0.set(1);
        led1.set(0);
        led2.set(0);
        led3.set(0);
        count +=1;
        hwlib::wait_ms(200);
        }
        
        else if (count ==1){
          led0.set(1);
        led1.set(1);
        led2.set(0);
        led3.set(0);
        count+=1;
        hwlib::wait_ms(200);
        }
        
    else if (count ==2){
        led0.set(1);
        led1.set(1);
        led2.set(1);
        led3.set(0);
        count +=1;
        hwlib::wait_ms(200);
    }
    
        else if(count ==3){
        led0.set(1);
        led1.set(1);
        led2.set(1);
        led3.set(1);
        count +=1;
        hwlib::wait_ms(200);
        } 
    
      }

        else if (knop2 ==1){
              
        
        if (count ==1){
          led0.set(0);
        led1.set(0);
        led2.set(0);
        led3.set(0);
        count=0;
        hwlib::wait_ms(200);
        }
        
    else if (count ==2){
        led0.set(1);
        led1.set(0);
        led2.set(0);
        led3.set(0);
        count =1;
        hwlib::wait_ms(200);
        
    }
    
        else if(count ==3){
        led0.set(1);
        led1.set(1);
        led2.set(0);
        led3.set(0);
        count =2;
        hwlib::wait_ms(200);
        } 
        else if (count ==4){
        led0.set(1);
        led1.set(1);
        led2.set(1);
        led3.set(0);
        count =3;
        }
            
            
        }
         
                







  }
}