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





	










	return;
}