// example: 
// using a line that requires its window

#include <iostream>

#include "window.hpp"
#include "line.hpp"
#include "rectangle.hpp"
#include "circle.hpp"
#include "figure.hpp"


 int main (int argc, char **argv){
     window w( 400, 300, 4 );
     
    figure hallo(w,10,10,40,40,5);
    hallo.print();
    

     
     
     return 0;
 }



