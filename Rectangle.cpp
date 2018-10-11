#include <iostream>
#include "Rectangle.hpp"
#include <sstream>
#include <string>

using namespace std; 

Rectangle::Rectangle(Point P, int a, int b) : x(P.getX()), y(P.getY()), w(a), h(b){
}

Rectangle::Rectangle(Point P1, Point P2) : x(P1.getX()), y(P1.getY()), w(P2.getX()), h(P2.getY()){
}

std::string Rectangle::toString(){
	ostringstream oss;
	oss << "Rectangle " << this -> x << "  " << this -> y << " " << this -> w << " " << this -> h;
	return oss.str();
}
