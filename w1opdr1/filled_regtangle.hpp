#ifndef FILLED_RECTANGLE_HPP
#define FILLED_RECTANGLE_HPP

#include "window.hpp"
#include "filled_regtangle.hpp"


class f_rectangle {
    
private:

   int start_x;
   int start_y; 
   int end_x;
   int end_y;
   window & w;


public:
  
  
  
     f_rectangle( window & w, int p_start_x, int p_start_y, int p_end_x, int p_end_y ):
      start_x( p_start_x ),
      start_y( p_start_y ),
      end_x( p_end_x ),
      end_y( p_end_y ),
      w( w )
      {}
      
      void print();
      
};



#endif