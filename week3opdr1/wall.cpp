#include "wall.hpp"
#include "rectangle.hpp"

wall::wall(window & w, const vector & start, const vector & end , int update_int):
rectangle( w, start, start),
top(w,vector(start.x,start.y),vector(end.x,start.y)),
top1(w,vector(start.x,start.y+1),vector(end.x,start.y+1)),
top2(w,vector(start.x,start.y+2),vector(end.x,start.y+2)),
top3(w,vector(start.x,start.y+3),vector(end.x,start.y+3)),
bottom(w,vector(start.x,end.y),vector(end.x,end.y)),
bottom1(w,vector(start.x,end.y-1),vector(end.x,end.y-1)),
bottom2(w,vector(start.x,end.y-2),vector(end.x,end.y-2)),
bottom3(w,vector(start.x,end.y-3),vector(end.x,end.y-3)),
right(w,vector(end.x,start.y),vector(end.x,end.y)),
right1(w,vector(end.x-1,start.y),vector(end.x-1,end.y)),
right2(w,vector(end.x-2,start.y),vector(end.x-2,end.y)),
right3(w,vector(end.x-3,start.y),vector(end.x-3,end.y)),
left(w,vector(start.x,start.y),vector(start.x,end.y)),
left1(w,vector(start.x+1,start.y),vector(start.x+1,end.y)),
left2(w,vector(start.x+2,start.y),vector(start.x+2,end.y)),
left3(w,vector(start.x+3,start.y),vector(start.x+3,end.y)),
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
bottom.draw();
bottom1.draw();
bottom2.draw();
bottom3.draw();
right.draw();
right1.draw();
right2.draw();
right3.draw();
left.draw();
left1.draw();
left2.draw();
left3.draw();
}
else{
     top.draw();
     top3.draw();
     bottom.draw();
     bottom3.draw();
     right.draw();
     right3.draw();
left.draw();
left3.draw();
}
 }





