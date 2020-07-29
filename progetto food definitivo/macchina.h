#ifndef MACCHINA_H
#define MACCHINA_H

#include <iostream>
#include <string>

#include "mezziDiConsegna.h"

class Macchina:public mezziDiConsegna
{
public:
	Macchina();
	Macchina(string m, bool disp = true);
	virtual ~Macchina() {};

	int GetVelocitaMedia() { return velocitaMedia; };

private:
	int velocitaMedia = 60;//km/h
};

#endif // !MACCHINA_H
