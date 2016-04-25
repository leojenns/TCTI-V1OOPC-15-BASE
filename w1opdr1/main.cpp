// example: 
// using a line that requires its window

#include <iostream>

#include "window.hpp"
#include "filled_regtangle.hpp"


 int main (int argc, char **argv){
     window w( 128, 64, 4 );
     f_rectangle h(w,20,20,60,60);
     h.print();
     
          
     f_rectangle l(w,10,10,15,15);
     l.print();

     
     
     return 0;
 }







/*int main(int argc, char **argv){
   
   line diagonal_line( w, 5, 5, 30, 40 );
   diagonal_line.print();
   return 0;
}
*/

