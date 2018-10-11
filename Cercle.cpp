#include <iostream>
#include "Cercle.hpp"
#include <sstream>
#include <string>
using namespace std;
Cercle::Cercle(Point P, int a,int b) : x(P.getX()), y(P.getY()), w(a), h(b){
}

Cercle::Cercle( Point P, int r) : x(P.getX()) , y(P.getY()), w(2*r), h(2*r){
}

std::string Cercle::toString()
{
                ostringstream oss;
                oss << "Cercle " << this -> x << "  " << this -> y << " " << this -> w << " " << this -> h;
                return oss.str();
}
