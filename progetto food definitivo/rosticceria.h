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

	void visualizza();

private:
	double prezzoConsegna;
	vector<Motorino> motorini;
};

#endif // !ROSTICCERIA_H
