#ifndef VECTOR_HPP
#define VECTOR_HPP
#include "ostream"



class vector {
 ///class for the use of factors 
private:
    int x;
    int y;

public:
///construction for vector
//
///This constructor initializes the x values and the y values 
/// of an vector.
///
vector(int x, int y):
x(x),
y(y)
{}


 bool operator==(const  vector & rhs)const ;
/// making +v, =v
vector operator+ ()const ;
/// making -v, = -1 *v
vector operator -()const;
/// making v+v = v
vector operator +(const vector & rhs)const;
///making v-v = v
vector operator -(const vector & rhs)const;
/// vector * integer
vector operator*(const int rhs)const;
/// int *vector
friend vector  operator* (  int lhs ,const vector & rhs);
/// vector / int
vector operator/ (const int rhs)const;
/// vector+=vector
vector & operator+=(const vector & rhs);
/// vector-=vector
vector& operator-=(const vector & rhs);
///vector *=int
vector& operator*=(const int rhs);
///vector/=int
vector& operator/=(const int rhs);
///std::ostream
friend  std::ostream & operator<<( std::ostream & lhs, const vector & rhs );

};
#endif