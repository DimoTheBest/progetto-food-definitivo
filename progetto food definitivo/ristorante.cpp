#include "ristorante.h"
Ristorante::Ristorante() :foodDelivery()
{
	tempoMedioPreparazione = 0;
	tempo = 0;
}
Ristorante::Ristorante(string n, double posLocX, double posLocY, double pM, string cT, int tempoM) : foodDelivery(n, posLocX, posLocY, pM, cT)
{
	tempoMedioPreparazione = tempoM;
	tempo = 0;
}

void Ristorante::SetParcoMacchine()
{
	Macchina a("fiesta", 1);
	Macchina b("punto", 1);
	Macchina c("opel", 1);

	macchine.push_back(a);
	macchine.push_back(b);
	macchine.push_back(c);
}
void Ristorante::ModificaDisponibilitaMacchina(int i, bool a)
{
	macchine.at(i).SetDisponibile(a);
}

void Ristorante::visualizzaMacchina(int i)
{
	cout << "macchina-modello: " << macchine.at(i).GetModello() << endl;
	cout << "macchina-velocita': " << macchine.at(i).GetVelocitaMedia() << endl;
	cout << "macchina-disponibilita': " << macchine.at(i).GetDisponibile() << endl;

}

void Ristorante::OrdinaPos(double x, double y)
{
	double distanza;
	distanza = pow((GetPosizioneLocaleX() - x), 2) + pow((GetPosizioneLocaleY() - y), 2);
	tempo = distanza / 60 * 60; // minuti per la consegna del cibo
}

void Ristorante::OrdinaPosQuant(double x, double y, int quantita)
{
	OrdinaPos(x, y);
	tempo = tempo + (tempoMedioPreparazione * quantita);
}

void Ristorante::OrdinaPosQuantCibo(double x, double y, int quantita, string cibo)
{
	
	if (GetCiboTipico()==cibo)
	{
		OrdinaPosQuant(x, y, quantita);
	}
	else
	{
		tempo = 0;
	}
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