#include "wall.hpp"
#include "rectangle.hpp"

wall::wall(window & w, const vector & start, const vector & end , int update_int):
drawable(w,start,start),
top(w,vector(start.x,start.y),vector(end.x,end.y)),
top1(w,vector(start.x+1,start.y+1),vector(end.x-1,end.y-1)),
top2(w,vector(start.x+2,start.y+2),vector(end.x-2,end.y-2)),
top3(w,vector(start.x+3,start.y+3),vector(end.x-3,end.y-3)),

update_interval(update_int)
{}

void wall::update(){
if (update_count < update_interval){
    update_count +=1;
}
else{
    filled = (! filled );
    update_count =1;
}
}
 void wall::draw(){
if (filled==1)
{
   
top.draw();
top1.draw();
top2.draw();
top3.draw();

}
else{
     top.draw();
     top3.draw();
 

}
 }





