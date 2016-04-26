// example:
// definition of the functions of a circle class 
// you are not expected to understand how circle::print works

#include "figure.hpp"

   
#include "window.hpp"
#include "line.hpp"
#include "rectangle.hpp"
#include "circle.hpp"
#include "figure.hpp"
    






void figure::count()
{
int i;
for (i=0;i<=number_n;i++)
{
    int length = endx-beginx;
    rectangle rec( w, beginx, beginy, endx, endy );
    circle a(w,beginx+((length)/4),beginy+((length)/4),(length)/10);
    circle b(w,endx-((length)/4),beginy+((length)/4),(length)/10);
    line n(w,(length)/2+beginx,(((length)/2)+(length)/10),(length)/2+beginx, ((length)/2)+(length)/5);
   
rec.print();
a.print();
b.print();
n.print();

    beginx= endx+10;
    endx = beginx+length  ;
    }

}