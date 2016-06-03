#ifndef AND_HPP
#define LINE_HPP

#include hwlib.hpp

class AND : public hwlib::pin_in {
private:
  auto  button1;
  auto button2;
public:
   line( hwlib::pin_in & button1, hwlib:::pin_in & button2):
   button1(button1),button2(buttton2){}
   
};

#endif 
