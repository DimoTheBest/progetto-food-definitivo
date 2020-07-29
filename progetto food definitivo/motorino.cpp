#include "motorino.h"
Motorino::Motorino()
{
	porzioniTrasportabili = 0;
}

Motorino::Motorino(string m, bool disp, int porzT) :mezziDiConsegna(m, disp)
{
	porzioniTrasportabili = porzT;
}