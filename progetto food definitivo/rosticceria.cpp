#include "rosticceria.h"
Rosticceria::Rosticceria() :foodDelivery()
{
	prezzoConsegna = 0;
	tempo = 0;
}

Rosticceria::Rosticceria(string n, double posLocX, double posLocY, double pM, string cT, double pC) : foodDelivery(n, posLocX, posLocY, pM, cT)
{
	prezzoConsegna = pC;
	tempo = 0;
}

void Rosticceria::SetParcoMotorini()
{
	Motorino a("vespa", 1,2);
	Motorino b("t-max", 1,3);
	Motorino c("booster", 1,1);

	motorini.push_back(a);
	motorini.push_back(b);
	motorini.push_back(c);
}
void Rosticceria::ModificaDisponibilitaMotorino(int i,bool a)
{
	motorini.at(i).SetDisponibile(a);
}
void Rosticceria::visualizzaMotorino(int i)
{
	cout << "motorino-modello: " << motorini.at(i).GetModello() << endl;
	cout << "motorino-velocita': " << motorini.at(i).GetVelocitaMedia() << endl;
	cout << "motorino-disponibilita': " << motorini.at(i).GetDisponibile() << endl;
	cout << "motorino-capienza: " << motorini.at(i).GetPorzioniTrasportabili() << endl;
}

void Rosticceria::OrdinaPos(double x, double y)
{
	double distanza;
	distanza = pow((GetPosizioneLocaleX() - x), 2) + pow((GetPosizioneLocaleY() - y), 2);
	tempo = distanza / 30 * 60; // minuti per la consegna del cibo
}
void Rosticceria::OrdinaPosQuant(double x, double y, int quantita)
{
		
}
void Rosticceria::OrdinaPosQuantCibo(double x, double y, int quantita, string cibo)
{
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