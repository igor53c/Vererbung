#include "C.h"

C::~C()
{
	cout << "Destruktor C" << endl;
}

void C::ausgabe() const
{
	cout << "C" << endl;
}
