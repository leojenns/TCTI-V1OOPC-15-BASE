// example: 
// using a line that requires its window

#include <iostream>

#include "window.hpp"
#include "line.hpp"
#include "rectangle.hpp"
#include "circle.hpp"
#include "figure.hpp"


 int main (int argc, char **argv){
     window w( 128, 100, 4 );
    figure hallo(w,10,10,80,80,1);
    hallo.print();

     
     
     return 0;
 }







/*int main(int argc, char **argv){
   
   line diagonal_line( w, 5, 5, 30, 40 );
   diagonal_line.print();
   return 0;
}
*/

