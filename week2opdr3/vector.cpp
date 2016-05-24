#include"vector.hpp"


    bool vector::operator==(const  vector & rhs)const {
    return (x==rhs.x ) &&(y == rhs.y);
}
vector vector::operator +()const{
 return (vector(x,y));
 }
  vector vector::operator - ()const{
      int r=x*-1;
      int p = y*-1;
      return(vector(r,p));
  }
  vector vector::operator+(const vector & rhs)const{
    return vector(x+rhs.x,y+rhs.y);
}
vector vector::operator -(const vector & rhs)const{
   return vector(x-rhs.x,y-rhs.y);
}
vector vector::operator*(const int rhs)const{
    return vector(x*rhs,y*rhs);
}
vector operator* (  int lhs ,const vector & rhs){
    return vector(lhs*rhs.x,lhs*rhs.y);
}
vector vector::operator/ (const int rhs)const{
    return vector(x/rhs,y/rhs);
}
vector & vector::operator+=(const vector & rhs){
    x = x+rhs.x;
    y= y+rhs.y;
    return *this;
}
vector& vector::operator-=(const vector & rhs){
    x = x-rhs.x;
    y= y-rhs.y;
    return *this;
}
vector& vector::operator*=(const int rhs){
    x=x*rhs;
    y=y*rhs;
    return *this;
}
vector& vector::operator/=(const int rhs){
    x=x/rhs;
    y=y/rhs;
    return *this;
}

  std::ostream & operator<<( std::ostream & lhs, const vector & rhs ){
      return lhs 
         << "[" 
         << rhs. x
         << "," 
         << rhs.y
         << "]";
   }   