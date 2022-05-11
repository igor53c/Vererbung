#include "Vogel.h"

Vogel::~Vogel()
{
	cout << "Destruktor Vogel" << endl;
}

void Vogel::getKlasse() const
{
	cout << "Vogel" << endl;
}

void Vogel::fliege() const
{
	cout << "Ich fliege...\n";
}
