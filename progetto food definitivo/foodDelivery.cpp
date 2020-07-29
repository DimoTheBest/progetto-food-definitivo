#include "foodDelivery.h"
foodDelivery::foodDelivery()
{
	nome = "";
	posizioneLocaleX = 0;
	posizioneLocaleY = 0;
	prezzoMedio = 0;
	ciboTipico = "";
}

foodDelivery::foodDelivery(string n, double posLocX, double posLocY, double pM, string cT)
{
	nome = n;
	posizioneLocaleX = posLocX;
	posizioneLocaleY = posLocY;
	prezzoMedio = pM;
	ciboTipico = cT;
}

void foodDelivery::OridinaPos(double x, double y)
{

}

void foodDelivery::OrdinaPosQuant(double x, double y, int quantita) 
{
	OridinaPos(x, y);
}

void foodDelivery::OrdinaPosQuantCibo(double x, double y, int quantita, string cibo)
{
	OrdinaPosQuant(x, y, quantita);
}