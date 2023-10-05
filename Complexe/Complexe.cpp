#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;
#include "Complexe.h"

void Complexe::Affiche(void) const {
	if (reel == 0) {
		if (imaginaire == 0) {
			cout << "0" << endl;
		}
		else {
			cout << imaginaire << "j" << endl;
		}
	}else
		if (imaginaire == 0) {
			cout << reel << endl;
		}
		else {
			cout <<reel<<" + "<< imaginaire << "j" << endl;
		}

};
void Complexe :: Affiche(ostream& flux) const {
	if (reel == 0) {
		if (imaginaire == 0) {
			cout << "0" << endl;
		}
		else {
			cout << imaginaire << "j" << endl;
		}
	}
	else
		if (imaginaire == 0) {
			cout << reel << endl;
		}
		else {
			cout << reel << " + " << imaginaire << "j" << endl;
		}
}
	

Complexe Complexe::Addition(const Complexe& b) const {
	cout << "Yo c'est PAS moi ";
	Complexe somme(b.GetRe() + reel, b.GetIm() + imaginaire);
	return somme;
};
/*
Complexe Complexe::Addition(const float& b) const {
	cout << "Yo c'est moi ";
	Complexe somme(reel+b, imaginaire );
	return somme;
};
*/
Complexe Complexe::Multiplication(const Complexe& b)const {
	float re, im;
	re = reel * b.GetRe() - imaginaire * b.GetIm();
	im = reel * b.GetIm() + imaginaire * b.GetRe();
	Complexe multiplication(re, im);
	return multiplication;
};
Complexe Complexe :: Soustraction(const Complexe& b)const {
	return Complexe(reel -b.GetRe(),imaginaire- b.GetIm());
}
Complexe Complexe::Division(const Complexe& b)const {
	Complexe conjugeB = b.Conjuge();
	float denominateur = (conjugeB * b).reel;
	float nominateur = conjugeB*
};
float Complexe::Argument(void)const {
	float arg;
	if (reel == 0 && imaginaire == 0) {
		cout << "Pas définie";
		arg = 0;
	}
	else if (reel == 0) {
		if (imaginaire > 0) {
			arg = M_PI / 2;
		}
		else {
			arg = - M_PI / 2;
		}
		
	}
	else if (imaginaire == 0) {
		if (reel > 0) {
			arg = 0;
		}
		else {
			arg = -M_PI;
		}
	}
	else
	{
		if (reel > 0) {
			if (imaginaire > 0) {
				arg = atan(imaginaire / reel);//1er cadrant
			}
			else {
				arg = atan(imaginaire / reel) + M_PI ;//2ime cadrant
			}
		}
		else {
			if (imaginaire > 0) {
				arg = atan(imaginaire / reel) - M_PI;//3er cadrant
			}
			else {
				arg = atan(imaginaire / reel);//2ime cadrant
			}
		}
	}
	return arg;

};
Complexe Complexe :: Conjuge(void) const {
	return Complexe(reel, -imaginaire);
}
Complexe Complexe::Opposer(void) const {
	return Complexe(-reel, -imaginaire);
}
Complexe :: ~Complexe(void) {
	cout << "Complexe detruit ";
	Affiche();
};
/*

Complexe Complexe :: operator+(const Complexe& b) const {
	
	return Addition(b);
};

Complexe Complexe :: operator+(const float& b) const {

	return Addition(b);
};
*/
Complexe operator+(const Complexe& a, const Complexe& b) {
	return a.Addition(b);
}
Complexe operator*(const Complexe& a, const Complexe& b) {
	return a.Multiplication(b);
}
ostream& operator<<(ostream& flux, const Complexe& z) {
	z.Affiche(flux);
	return flux;
}