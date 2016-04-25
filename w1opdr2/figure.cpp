// example:
// definition of the functions of a circle class 
// you are not expected to understand how circle::print works

#include "figure.hpp"
figure::figure(window & w, int beginx ,int beginy, int endx, int endy, int number):
    rec( w, beginx, beginy, endx, endy ),
    a(w,beginx+((endx-beginx)/4),beginy+((endx-beginx)/4),(endx-beginx)/10),
    b(w,endx-((endx-beginx)/4),beginy+((endx-beginx)/4),(endx-beginx)/10),
    n(w,(endx-beginx)/2+beginx,(((endx-beginx)/2)+(endx-beginx)/10),(endx-beginx)/2+beginx, ((endx-beginx)/2)+(endx-beginx)/5)
   
    

{}


void figure::print(){
rec.print();
a.print();
b.print();
n.print();
}
