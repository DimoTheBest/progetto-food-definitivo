#ifndef MEZZIDITRASPORTO_H
#define MEZZIDITRASPORTO_H

#include <iostream>
#include <string>

using namespace std;

class mezziDiConsegna
{
public:
	mezziDiConsegna();
	mezziDiConsegna(string m, bool disp = true);
	virtual ~mezziDiConsegna() {};

	string GetModello() { return modello; };
	bool GetDisponibile() { return disponibile; };

	void SetDisponibile(bool var) { disponibile = var; };

private:
	string modello;
	bool disponibile;

};

#endif // !MEZZIDITRASPORTO_H
