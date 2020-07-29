#ifndef ROSTICCERIA_H
#define ROSTICCERIA_H

#include <iostream>
#include <string>

#include "foodDelivery.h"

using namespace std;

class Rosticceria:public foodDelivery
{
public:
	Rosticceria();
	Rosticceria(string n, double posLocX, double posLocY, double pM, string cT, double pC);
	virtual ~Rosticceria() {};

private:
	double prezzoConsegna;
};

#endif // !ROSTICCERIA_H
