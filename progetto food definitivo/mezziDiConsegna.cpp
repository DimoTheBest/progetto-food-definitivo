#include "mezziDiConsegna.h"

mezziDiConsegna::mezziDiConsegna()
{
	modello = "";
	disponibile = true;
}

mezziDiConsegna::mezziDiConsegna(string m, bool disp)
{
	modello = m;
	disponibile = disp;
}