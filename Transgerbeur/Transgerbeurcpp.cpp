#include <iostream>
#include "Transgerbeur.h"


using namespace std;
int main() {
	cout << "Ca cest le programme Trasgerbeur"<< endl;

	SRouleau ro1{ 10, 30 };

	SPalette pa1;
	pa1.poids = 101;
	strcpy_s(pa1.ref, "ref1");

	EEtat etatC1 = EEtat::vide;
	contenu cont = { pa1 };
	cont.rouleau = ro1;

	SCasier c1 ;
	c1.palette = pa1;
	EEtat::palette;
	c1.px = 2;
	c1.py = 3;

	SCasier c2;
	c2.palette = pa1;

	SCasier casier[9];
	casier[0] = c1;
	casier[2] = c2;

	cout << "le taille de ro1: " << sizeof(ro1) <<endl;
	cout << "le taille de pa1: " << sizeof(pa1) << endl;
	cout << "le taille de etatC1: " << sizeof(etatC1) << endl;
	cout << "le taille de cont: " << sizeof(cont) << endl;
	cout << "le taille de c1: " << sizeof(c1) << endl;
	cout << "le taille de c2: " << sizeof(c2) << endl;
	cout << "le taille de casier: " << sizeof(casier) << endl;











	 return 0;
}