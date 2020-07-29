#include <iostream>
#include <vector>

#include "ristorante.h"
#include "rosticceria.h"

using namespace std;

int main() {
	vector<Ristorante> ristoranti;
	vector<Rosticceria> rosticcerie;

	Ristorante a("dmo", 2, 1, 22.3, "pizza", 15);
	Ristorante b("fra", 2, 1, 22.3, "pasta", 15);
	Ristorante c("lolo", 2, 1, 22.3, "patatine fritte", 15);

	Rosticceria d("mario", 2, 1, 22.3, "pizza", 5.2);
	Rosticceria e("fonta", 2, 1, 22.3, "pasta", 5);
	Rosticceria f("diego", 2, 1, 22.3, "patatine fritte", 3.6);


	ristoranti.push_back(a);
	ristoranti.push_back(b);
	ristoranti.push_back(c);

	rosticcerie.push_back(d);
	rosticcerie.push_back(e);
	rosticcerie.push_back(f);

	ristoranti.at(0).visualizza();
	cout << "----------------------------------------" << endl;
	ristoranti.at(1).visualizza();
	cout << "----------------------------------------" << endl;
	ristoranti.at(2).visualizza();
	cout << "----------------------------------------" << endl;
	rosticcerie.at(0).visualizza();
	cout << "----------------------------------------" << endl;
	rosticcerie.at(1).visualizza();
	cout << "----------------------------------------" << endl;
	rosticcerie.at(2).visualizza();
	cout << "----------------------------------------" << endl;

	return 0;
}