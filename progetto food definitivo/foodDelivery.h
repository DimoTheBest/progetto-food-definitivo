#ifndef FOODDELIVERY_H
#define FOODDELIVERY_H

#include <iostream>
#include <string>

using namespace std;

class foodDelivery
{
public:
	foodDelivery();
	foodDelivery(string n, double posLocX, double posLocY, double pM, string cT);
	void OridinaPos(double x, double y);
	void OrdinaPosQuant(double x, double y, int quantita);
	void OrdinaPosQuantCibo(double x, double y, int quantita, string cibo);
	virtual ~foodDelivery() {};

	string GetNome() { return nome; };
	double GetPosizioneLocaleX() { return posizioneLocaleX; };
	double GetPosizioneLocaleY() { return posizioneLocaleY; };
	double GetPrezzoMedio() { return prezzoMedio; };
	string GetCiboTipico() { return ciboTipico; };
private:
	string nome;
	double posizioneLocaleX;
	double posizioneLocaleY;
	double prezzoMedio;
	string ciboTipico;
};



#endif // !FOODDELIVERY_H
