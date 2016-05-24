#include "filled_regtangle.hpp"
#include "window.hpp"


void f_rectangle::print()
{
    for(int i =0; i+start_x<end_x;i++){
         for(int j = 0; (j+start_y)<(end_y);j++){
     w.draw((start_x+i),(start_y+j));
        
        }

        
        }

  
}