#include "ostream"
#include "catch_with_main.hpp"
#include "vector.hpp"

/// test cases for the operators in the vector class
TEST_CASE( "+ , one parameter vector" ){
   vector v( 1, 2 );
    vector a =  +v ;
   REQUIRE(  a == vector( 1, 2 )) ; 
}

TEST_CASE("- , one operator vector"){
        vector v(1,2);
        vector a = -v;
        REQUIRE(a== vector(-1,-2));
}

TEST_CASE("+  two vector operator "){
    vector v(1,2);
    vector a(2,3);
    vector x = v +  vector(2,3);
    REQUIRE( x ==vector(3,5));
}


TEST_CASE("- two vector operator"){
    vector v(6,7);
    vector x= v-vector(2,3);
    REQUIRE(x==vector(4,4));
}

TEST_CASE("integer * vector"){
    vector v(1,2);
    vector x= 3* v;
    REQUIRE(x==vector(3,6));
}

TEST_CASE("vector * integer"){
    vector v(1,2);
    vector x = v*3;
    REQUIRE(x==vector(3,6));
}
TEST_CASE("vector/integer"){
    vector v(6,12);
    vector x= v/3;
REQUIRE(x==vector(2,4)); 
}

TEST_CASE("+="){
    vector v(3,5);
    vector z(3,5);
    v +=z;
    REQUIRE(v==vector(6,10));
}

TEST_CASE("-="){
    vector v(6,9);
    vector z(3,5);
    v-=z;
    REQUIRE(v==vector(3,4));
}

TEST_CASE("*="){
vector v(1,2);
v*=4;
REQUIRE(v==vector(4,8));
}

TEST_CASE("/="){
    vector v(8,24);
    v/=4;
    REQUIRE(v==vector(2,6));
}
TEST_CASE("std"){
    vector v(1,2);
    std::stringstream s;
    s<<v;
    REQUIRE(s.str() == "[1,2]");
}