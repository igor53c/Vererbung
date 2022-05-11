// Vererbung.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "V1.h"
#include "V2.h"
#include "V12.h"
#include "Vogel.h"
#include "Singvogel.h"
#include "SprechenderSingvogel.h"

using namespace std;

int main()
{
	locale::global(locale("German_germany"));

	V1 v1;

	v1.f();

	V2 v2;

	v2.f();

	V12 v12;

	v12.K1_f();
	v12.K2_f();

	cout << endl;

	v12.K1::f();
	v12.K2::f();

	cout << endl;

	Vogel vogel;

	vogel.getKlasse();
	vogel.fliege();

	cout << endl;

	Singvogel singvogel;

	singvogel.getKlasse();
	singvogel.fliege();
	singvogel.singe();

	cout << endl;

	SprechenderSingvogel sprechenderSingvogel;

	sprechenderSingvogel.getKlasse();
	sprechenderSingvogel.fliege();
	sprechenderSingvogel.singe();
	sprechenderSingvogel.sprich();

	cout << endl;

	SprechenderSingvogel* pSprechenderSingvogel = new SprechenderSingvogel();

	pSprechenderSingvogel->getKlasse();
	pSprechenderSingvogel->fliege();
	pSprechenderSingvogel->singe();
	pSprechenderSingvogel->sprich();

	cout << endl;

	Singvogel* pSV = static_cast<Singvogel*>(pSprechenderSingvogel);

	pSV->singe();

	cout << endl;

	// V12* pV12 = static_cast<V12*>(pSprechenderSingvogel);

	pSV = dynamic_cast<Singvogel*>(pSprechenderSingvogel);

	if (pSV)
		pSV->singe();

	cout << endl;

	V12* pV12 = dynamic_cast<V12*>(pSprechenderSingvogel);

	if (pV12)
		pSV->singe();
	else
		cerr << "Fehler" << endl;

	cout << endl;

	v12.~V12();

	v12.K1_f();

	return EXIT_SUCCESS;
}
