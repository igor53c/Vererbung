#include "B.h"

B::~B()
{
	cout << "Destruktor B" << endl;
}

void B::ausgabe() const
{
	cout << "B" << endl;
}
