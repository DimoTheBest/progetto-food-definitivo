#include <iostream>
#include <vector>

#include "ristorante.h"
#include "rosticceria.h"

using namespace std;

vector<Ristorante> ristoranti;
vector<Rosticceria> rosticcerie;
int k = 0, j = 0;

void primoCiboDisponibile();
void prenotaCertoNumeroDiPorzioni(int porz);

int main() {
	

	int scelta;

	Ristorante a("dmo con il ristorante", 2, 1, 22.3, "pizza", 15);
	a.SetParcoMacchine();
	ristoranti.push_back(a);
	Ristorante b("da lolo", 2, 1, 22.3, "polpette", 15);
	b.SetParcoMacchine();
	ristoranti.push_back(b);


	Rosticceria c("ristorante di franco", 2, 1, 22.3, "alette", 5.2);
	c.SetParcoMotorini();
	rosticcerie.push_back(c);
	Rosticceria d("mario", 2, 1, 22.3, "pesce", 5.2);
	d.SetParcoMotorini();
	rosticcerie.push_back(d);


	primoCiboDisponibile();

	

	return 0;
}


void primoCiboDisponibile()
{
	int minRis = INT16_MAX;
	int indice = 0;
	bool rosOris = 0;
	for (int i = 0; i < ristoranti.max_size(); i++)
	{
		try
		{
			if (ristoranti.at(i).GetTempo() < minRis)
			{
				minRis = ristoranti.at(i).GetTempo();
				indice = i;
				rosOris = true;
			}
		}
		catch (const std::exception&)
		{
			break;
		}
		
	}
	for (int  i = 0; i < rosticcerie.max_size(); i++)
	{
		try
		{
			if (rosticcerie.at(i).GetTempo() < minRis)
			{
				minRis = rosticcerie.at(i).GetTempo();
				indice = i;
				rosOris = false;
			}
		}
		catch (const std::exception&)
		{
			break;
		}
		
	}

	if (rosOris == true)
	{
		ristoranti.at(indice).ModificaDisponibilitaMacchina(k,false);
		ristoranti.at(indice).visualizza();
		ristoranti.at(indice).visualizzaMacchina(k);
		ristoranti.at(indice).ModificaDisponibilitaMacchina(k, true);
		k++;
	}
	else
	{
		rosticcerie.at(indice).ModificaDisponibilitaMotorino(j, false);
		rosticcerie.at(indice).visualizza();
		rosticcerie.at(indice).visualizzaMotorino(j);
		rosticcerie.at(indice).ModificaDisponibilitaMotorino(j, true);
		j++;
	}
}

void prenotaCertoNumeroDiPorzioni(int porz)
{
	double minPrezzo = 999.9;
	int indice = 0;
	bool rosOris = 0;
	for (int i = 0; i < ristoranti.max_size(); i++)
	{
		try
		{
			if (ristoranti.at(i).GetPrezzoMedio() < minPrezzo)
			{
				minPrezzo = ristoranti.at(i).GetPrezzoMedio();
				indice = i;
				rosOris = true;
			}
		}
		catch (const std::exception&)
		{
			break;
		}
		
		
	}
	for (int  i = 0; i < rosticcerie.max_size(); i++)
	{
		try
		{
			if (rosticcerie.at(i).GetPrezzoMedio() < minPrezzo)
			{
				minPrezzo = rosticcerie.at(i).GetPrezzoMedio();
				indice = i;
				rosOris = false;
			}
		}
		catch (const std::exception&)
		{
			break;
		}
		
	}
	if (porz > 3)
	{
		cout << "troppe porzioni, non si possono trasportare in motorino!" << endl;
	}
	else
	{
		if (rosOris == true)
		{
			ristoranti.at(indice).ModificaDisponibilitaMacchina(k, false);
			ristoranti.at(indice).visualizza();
			ristoranti.at(indice).visualizzaMacchina(k);
			ristoranti.at(indice).ModificaDisponibilitaMacchina(k, true);
			k++;
		}
		else
		{
			rosticcerie.at(indice).ModificaDisponibilitaMotorino(j, false);
			rosticcerie.at(indice).visualizza();
			rosticcerie.at(indice).visualizzaMotorino(j);
			rosticcerie.at(indice).ModificaDisponibilitaMotorino(j, true);
			j++;
		}
	}

	
}