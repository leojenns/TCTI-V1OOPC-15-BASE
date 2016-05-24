#ifndef WALL_HPP
#define WALL_HPP



#include "window.hpp"
#include "drawable.hpp"
#include "vector.hpp"
#include "line.hpp"
#include "rectangle.hpp"
class wall :public rectangle{

protected :
    bool filled = 0;
    int update_interval;
    int update_count=1;
    line top;
 line top1;
  line top2;
  line top3;
 line right; 
   line right1;
  line right2;
 line right3;
 line bottom;
 line bottom1;
 line bottom2;
 line bottom3;
 line left;
    line left1;
  line left2;
  line left3;

public :
wall(window & w, const vector & start, const vector & end , int update_int);




    void draw()override;
    void update();
};
#endif 