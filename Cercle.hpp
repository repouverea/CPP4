#ifndef __CPP4__CERCLE_HPP__
#define __CPP4__CERCLE_HPP__

#include "Forme.hpp"

class Cercle : public Forme {
	private:
                int x;
                int y;
                int w;
                int h;
        public:
                Cercle(Point,int,int);
                Cercle(Point,int);
		std::string toString();
};

#endif
