#include <iostream>
#include <math.h>
using namespace std;
#include "Complexe.h"

int main() {
	Complexe A;
	Complexe B(1, 1);
	Complexe C(1, 3);
	Complexe D(1, 4);
	A.Affiche();
	B.Affiche();
	C.Affiche();

	
	float module = C.GetModule();
	cout << "Module C :" << module<<endl;

	//Complexe somme = B.Addition(C);
	//Complexe somme = B + (C +D);
	//Complexe multiplication = D + B*C;
	//cout << "multiplication :"<< multiplication;
	float arg = B.Argument();
	cout << "arg : "<<arg;
	
	return 0;
}