
#include "hwlib.hpp"
class AND : public hwlib::pin_in {
private:
  hwlib::pin_in &  button1;
   hwlib::pin_in & button2;
public:
   AND( hwlib::pin_in & button1, hwlib::pin_in & button2):
   button1(button1),button2(button2){}
   
   bool get() override{
       if( (button1.get() == 0) && (button2.get()==0))
       {
           return 1;
       }
       return 0;
   }
};

int main(void )
{
      WDT->WDT_MR = WDT_MR_WDDIS;
   
   namespace target = hwlib::target;
	  auto sw = hwlib::target::pin_in( target::pins::d12 );  
     auto yy = hwlib::target::pin_in( target::pins::d7 );  
 auto led0 = hwlib::target::pin_out(hwlib::target::pins::d8);
  
  for (;;){
      hwlib::wait_ms(300);
      bool x = AND(sw,yy).get();
      hwlib::cout<< x;
      led0.set(x);
  }
}
