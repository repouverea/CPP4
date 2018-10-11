#ifndef __CPP4__RECTANGLE_HPP__
#define __CPP4__RECTANGLE_HPP__

#include "Forme.hpp"

class Rectangle : public Forme { 
	private:
                int x;
                int y;
                int w;
                int h;
        public:
                Rectangle(Point,int,int);
                Rectangle(Point, Point);
		std::string toString();
};

#endif
