#include "hwlib.hpp"
#include "ostream"
  using namespace std;
void burn(int row[]){
    namespace target = hwlib::target;  
    auto ds   = target::pin_out( target::pins::d8 );
    auto shcp = target::pin_out( target::pins::d9 );
    auto stcp = target::pin_out( target::pins::d10 );
    auto spi  = hwlib::spi_bus_bit_banged_sclk_mosi_miso( 
       stcp,        ds,
        hwlib::pin_in_dummy     ); 
   auto hc595 = hwlib::hc595( spi, shcp );
   auto led0 = target::pin_out( target::pins::d2 );
   auto led1 = target::pin_out( target::pins::d3 ); 
   auto led2 = target::pin_out( target::pins::d4 ); 
   auto led3 = target::pin_out( target::pins::d5 );
    
    hc595.p0.set(row[0]);
   hc595.p1.set(row[1]); 
   hc595.p2.set(row[2]); 
   hc595.p3.set(row[3]);
    led0.set(row[4]);
    led1.set(row[5]);
    led2.set(row[6]);
    led3.set(row[7]);
    hwlib::wait_ms(200);

    
}
void plusone(int * row){
    for (int i=0;i<8;i++){
        if (row[i]==0){
            row[i]=1;
            hwlib::cout <<"plus one";
            return;
        }
        
        
    }
    
}
void minusone(int * row){
       for (int i =0;i<8;i++){
      if (row[i]==0){
            row[i-1]=0;
             hwlib::cout <<"minus -";
            return;
            
        }
       else if (row[7]==1){
            row[7]=0;
            hwlib::cout <<"minus in 7";
            return;
        }  
      
        
        
    }
}
int main(void)
{
 

      WDT->WDT_MR = WDT_MR_WDDIS;   
      namespace target = hwlib::target;
	 
  auto sw = hwlib::target::pin_in_out( target::pins::d12 );  
     auto yy = hwlib::target::pin_in_out( target::pins::d7 );  
  sw.direction_set_input();  
  yy.direction_set_input();  
   bool down ;
   bool up;
int row[] = {0,0,0,0,0,0,0,0};

while(1){
    down = (!yy.get());
    up = (!sw.get());
    if (up==1){
     hwlib::cout <<"up was presed\n";
        plusone(row);
    }
    else if (down ==1){
        hwlib::cout <<"down was presed\n";
        minusone(row);
    }
    burn(row);
    
    hwlib::wait_ms(200);
}

   
}
