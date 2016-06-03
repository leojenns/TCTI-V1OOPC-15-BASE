#ifndef FIGURE_HPP
#define FIGURE_HPP

#include "window.hpp"

#include "rectangle.hpp"
#include "circle.hpp"



#include "figure.hpp"

class figure {
    
private:

   int beginx;
   int beginy; 
   int endx;
   int endy;
   int number_n;
   window & w;

   
public:
  figure( window & w, int beginx ,int beginy, int endx, int endy, int number_n):
      beginx( beginx ),
      beginy( beginy ),
      endx( endx ),
      endy(endy),
      number_n(number_n),
      w(w)
      {}
   
     
   void print(); 
   

   
};

#endif // FIGURE_HPP
