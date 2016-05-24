#include "vector.hpp"
vector vector::operator+(const vector & rhs) const{
    return vector( x+rhs.x,y+rhs.y);
}
vector vector::operator-(const vector & rhs) const{
    return vector( x-rhs.x,y-rhs.y);
}
std::ostream & operator<<( std::ostream & lhs, vector pos ){
   lhs << "(" << pos.x << "," << pos.y << ")";
   return lhs;
}