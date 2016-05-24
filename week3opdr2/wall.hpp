#ifndef WALL_HPP
#define WALL_HPP



#include "window.hpp"
#include "drawable.hpp"
#include "vector.hpp"
#include "line.hpp"
#include "rectangle.hpp"
class wall :public drawable{

protected :
    bool filled = 0;
    int update_interval;
    int update_count=1;
    rectangle top;
  rectangle top1;
  rectangle  top2;
  rectangle top3;


public :
wall(window & w, const vector & start, const vector & end , int update_int);




    void draw()override;
    void update();
};
#endif 