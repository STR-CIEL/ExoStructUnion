#pragma once 

#include <iostream>


struct SCasier {
	int px;
	int py;
};
enum EEtat {
	vide, palette, rouleau
};
struct SPalette {
	int poids;
	char ref[19];
};
struct SRouleau {
	float longeur;
	int num;
};


union contenu {
	SPalette palette;
	SRouleau rouleau;
};


struct SEnCasier {

	

};