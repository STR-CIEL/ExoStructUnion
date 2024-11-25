#pragma once 

#include <iostream>



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

struct SCasier {
	int px;
	int py;
	SPalette palette;
	SRouleau rouleau;

};

