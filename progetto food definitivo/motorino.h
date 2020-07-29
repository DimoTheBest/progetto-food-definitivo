#ifndef MOTORINO_H
#define MOTORINO_H

#include <iostream>
#include <string>

#include "mezziDiConsegna.h"

class Motorino :public mezziDiConsegna
{
public:
	Motorino();
	Motorino(string m, bool disp, int porzT);
	virtual ~Motorino() {};

	int GetVelocitaMedia() { return velocitaMedia; };

	int GetPorzioniTrasportabili() { return porzioniTrasportabili; };

private:
	int velocitaMedia = 30;//km/h
	int porzioniTrasportabili;

};

#endif // !MOTORINO_H
