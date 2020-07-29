#include "rosticceria.h"
Rosticceria::Rosticceria() :foodDelivery()
{
	prezzoConsegna = 0;
}

Rosticceria::Rosticceria(string n, double posLocX, double posLocY, double pM, string cT, double pC) : foodDelivery(n, posLocX, posLocY, pM, cT)
{
	prezzoConsegna = pC;
}

void Rosticceria::visualizza()
{
	cout << "rosticceria-nome: " << GetNome() << endl;
	cout << "rosticceria-posX: " << GetPosizioneLocaleX() << endl;
	cout << "rosticceria-posY: " << GetPosizioneLocaleY() << endl;
	cout << "rosticceria-prezzomedio: " << GetPrezzoMedio() << endl;
	cout << "rosticceria-cibo tipico: " << GetCiboTipico() << endl;
	cout << "rosticceria-prezzo consegna: " << GetPrezzoConsegna() << endl;
}