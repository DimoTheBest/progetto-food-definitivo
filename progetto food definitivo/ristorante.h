#ifndef RISTORANTE_H
#define RISTORANTE_H

#include <iostream>
#include <string>
#include <vector>

#include "foodDelivery.h"
#include "macchina.h"

using namespace std;

class Ristorante:public foodDelivery,Macchina
{
public:
	Ristorante();
	Ristorante(string n, double posLocX, double posLocY, double pM, string cT, int tempoM);
	virtual ~Ristorante() {};

	int GetTempoMedioPreparazione() { return tempoMedioPreparazione; };

	void SetParcoMacchine();

	void ModificaDisponibilitaMacchina(int i, bool a);

	void visualizzaMacchina(int i);

	void visualizza();

private:
	int tempoMedioPreparazione;
	vector<Macchina> macchine;
};

#endif // !RISTORANTE_H
