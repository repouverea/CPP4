#ifndef __CPP4__FORME_HPP__
#define __CPP4__FORME_HPP__

#include "Point.hpp"

// enum COULEURS { BLANC, NOIR};
enum class COULEURS { 
	BLANC, NOIR, BLEU, JAUNE, ROUGE, VERT
};

class Forme { 
	private:
	       Point point; 
	       COULEURS couleur;
		static int id;
 		static int nbformes;		
	public:
	       Forme(Point,COULEURS);
	       Forme(); 
	       Point &getPoint(); 
	       COULEURS getCouleur();
	       void setX(int); 
	       void setY(int); 
	       void setCouleur(COULEURS);
	       int getId();
	       static int prochainId();

};

#endif
