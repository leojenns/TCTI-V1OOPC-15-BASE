#include "victim.hpp"
#include "rectangle.hpp"

victim::victim(window & w, vector start,  vector  end ):
drawable(w,start,end-start),
harry(w,vector(start.x+1,start.y+1),vector(end.x-1,end.y-1),update_count),
end(end),start(start)

{}

void victim::update(){
    if (hit ==true){
 harry.kill +=2;
    }}



 void victim::draw(){
harry.draw_kill();
 }


void victim::interact( drawable & other,drawable * objects[] ){
   if( this != & other){
      if( overlaps( other )){
     hit = 1;
        }}}
