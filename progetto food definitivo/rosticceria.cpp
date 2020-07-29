#include "rosticceria.h"
Rosticceria::Rosticceria() :foodDelivery()
{
	prezzoConsegna = 0;
}

Rosticceria::Rosticceria(string n, double posLocX, double posLocY, double pM, string cT, double pC) : foodDelivery(n, posLocX, posLocY, pM, cT)
{
	prezzoConsegna = pC;
}