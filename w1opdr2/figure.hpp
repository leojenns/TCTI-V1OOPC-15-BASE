#ifndef FIGURE_HPP
#define FIGURE_HPP

#include "window.hpp"
#include "line.hpp"
#include "rectangle.hpp"
#include "circle.hpp"



class figure {
private:
  line n;
   rectangle rec;
   circle a,b;
   
   
public:
   figure( window & w, int beginx ,int beginy, int endx, int endy, int number_n );



   void print();
};

#endif // FIGURE_HPP
