#ifndef __CPP4__POINT_HPP__
#define __CPP4__POINT_HPP__

class Point{
   private:
       int x;
       int y;
   public:
        Point();
        Point(int,int);
        int getX();
        int getY();
	void setX(int); 
        void setY(int); 	

};

// declaration d'un point ORIGINE
// ²il ne faudra pas oublier de l'instancier quelque part
extern Point ORIGINE;

#endif
