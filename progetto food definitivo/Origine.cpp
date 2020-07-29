#include <iostream>
#include <vector>

#include "ristorante.h"
#include "rosticceria.h"

using namespace std;

int main() {
	vector<Ristorante> ristoranti;
	vector<Rosticceria> rosticcerie;

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

	cout << "vuoi ordinare da un ristorante o da una rosticceria?( 0 per ristorante 1 per rosticceria) ";
	cin >> scelta;

	if (scelta == 0)
	{
		cout << "i ristoranti disponibili sono:" << endl;
		for (int i = 0; i < ristoranti.max_size(); i++)
		{
			try
			{
				ristoranti.at(i).visualizza();
			}
			catch (const std::exception&)
			{
				break;
			}
			
		}
	}
	else
	{
		cout << "le rosticcerie disponibili sono:" << endl;
		for (int i = 0; i < rosticcerie.max_size(); i++)
		{
			try
			{
				rosticcerie.at(i).visualizza();
			}
			catch (const std::exception&)
			{
				break;
			}
		}
	}

	return 0;
}