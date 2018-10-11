#include <iostream>
#include "Point.hpp"

using namespace std;

Point ORIGINE = Point(0,0); 

Point::Point(int a,int b) : x(a), y(b){
}

Point::Point() : x(0), y(0){
}

int Point::getX() {
  return x;
}

int Point::getY() {
        return y;
}

void Point::setX(int valeur) {
  this->x = valeur;
}

void Point::setY(int valeur) {
  this->y = valeur;
}

