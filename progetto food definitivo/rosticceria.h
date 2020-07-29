#ifndef ROSTICCERIA_H
#define ROSTICCERIA_H

#include <iostream>
#include <string>
#include <vector>

#include "foodDelivery.h"
#include "motorino.h"

using namespace std;

class Rosticceria:public foodDelivery,Motorino
{
public:
	Rosticceria();
	Rosticceria(string n, double posLocX, double posLocY, double pM, string cT, double pC);
	virtual ~Rosticceria() {};

	double GetPrezzoConsegna() { return prezzoConsegna; };

	void SetParcoMotorini();

	void ModificaDisponibilitaMotorino(int i,bool a);

	void visualizzaMotorino(int i);

	void OrdinaPos(double x, double y);
	void OrdinaPosQuant(double x, double y, int quantita);
	void OrdinaPosQuantCibo(double x, double y, int quantita, string cibo);

	double GetTempo() { return tempo; };

	void visualizza();

private:
	double prezzoConsegna;
	vector<Motorino> motorini;
	double tempo;
};

#endif // !ROSTICCERIA_H
