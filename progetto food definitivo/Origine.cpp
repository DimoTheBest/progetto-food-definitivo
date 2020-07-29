#include <iostream>
#include <vector>

#include "ristorante.h"

using namespace std;

int main() {
	vector<Ristorante> ristoranti;

	Ristorante a("dmo", 2, 1, 22.3, "pizza", 15);
	Ristorante b("fra", 2, 1, 22.3, "pasta", 15);
	Ristorante c("lolo", 2, 1, 22.3, "patatine fritte", 15);

	ristoranti.push_back(a);
	ristoranti.push_back(b);
	ristoranti.push_back(c);

	ristoranti.at(0).visualizza();
	cout << "----------------------------------------" << endl;
	ristoranti.at(1).visualizza();
	cout << "----------------------------------------" << endl;
	ristoranti.at(2).visualizza();
	cout << "----------------------------------------" << endl;

	return 0;
}