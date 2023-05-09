// <main.cpp>

#include <iostream>
#include <fstream>
#include <cmath>
#include "class.h"
using namespace std;


void main() {
	// akili
	character * akali;
	akali = new character(5, 10, 2, 3, -5, 0.1, 10);
	akali->savefile("akali.dat");
	delete akali;

	// amumu
	character * amumu;
	amumu = new character(7, 100, -3.5, 4, 100, 10, 15);
	amumu->savefile("amumu.dat");
	delete amumu;

	// annie
	character * annie;
	annie = new character(12, 17, 0.01, 0.2, 1.5, 0.08, 20);
	annie->savefile("annie.dat");
	delete annie;

	// ashe
	character * ashe;
	ashe = new character(10, 20, 4.2, -5.3, 2.1, 0.2, 5);
	ashe->savefile("ashe.dat");
	delete ashe;

}
