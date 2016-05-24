#include "window.hpp"
#include "line.hpp"
#include "ball.hpp"
#include "rectangle.hpp"
#include "muur.hpp"

int main(){
   window w( vector( 128, 64 ), 2);
//   line top( w, vector(   0,  0 ), vector( 127,  0 ) );
//   line right( w, vector( 127,  0 ), vector( 127, 63 ) );
//   line bottom( w, vector( 127, 63 ), vector(   0, 63 ) );
//   line left( w, vector(   0, 63 ), vector(   0,  0 ) );
   ball b( w, vector( 10, 10 ), 8, vector( 2, 1 ) );
   muur baotymcboatface(w,vector (0,4),vector(128,60),true,5);
   
   drawable * objects[] = { &b,&baotymcboatface};

   for(;;){
      w.clear();
      for( auto & p : objects ){
         p->draw();
      }
      wait_ms( 18 );
      for( auto & p : objects ){
          p->update();
      }
	  wait_ms(18);
   }
}

