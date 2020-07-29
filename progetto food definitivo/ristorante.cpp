#include "ristorante.h"
Ristorante::Ristorante() :foodDelivery()
{
	tempoMedioPreparazione = 0;
}
Ristorante::Ristorante(string n, double posLocX, double posLocY, double pM, string cT, int tempoM) : foodDelivery(n, posLocX, posLocY, pM, cT)
{
	tempoMedioPreparazione = tempoM;
}

void Ristorante::visualizza()
{
	cout << "ristorante-nome: " << GetNome() << endl;
	cout << "ristorante-posX: " << GetPosizioneLocaleX() << endl;
	cout << "ristorante-posY: " << GetPosizioneLocaleY() << endl;
	cout << "ristorante-prezzomedio: " << GetPrezzoMedio() << endl;
	cout << "ristorante-cibo tipico: " << GetCiboTipico() << endl;
	cout << "ristorante-tempo preparazione: " << GetTempoMedioPreparazione() << endl;
}