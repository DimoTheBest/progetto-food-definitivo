#ifndef RISTORANTE_H
#define RISTORANTE_H

#include <iostream>
#include <string>

#include "foodDelivery.h"

using namespace std;

class Ristorante:public foodDelivery
{
public:
	Ristorante();
	Ristorante(string n, double posLocX, double posLocY, double pM, string cT, int tempoM);
	virtual ~Ristorante() {};

	int GetTempoMedioPreparazione() { return tempoMedioPreparazione; };

	void visualizza();

private:
	int tempoMedioPreparazione;
};

#endif // !RISTORANTE_H
