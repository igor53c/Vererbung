// Vererbung.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "V1.h"
#include "V2.h"
#include "V12.h"
#include "Vogel.h"
#include "Singvogel.h"
#include "SprechenderSingvogel.h"
#include "A.h"
#include "B.h"
#include "C.h"

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

	cout << endl;

	vector<Vogel*> v = vector<Vogel*>();
	
	v.push_back(new Vogel());
	v.push_back(new Singvogel());
	v.push_back(new SprechenderSingvogel());
	
	for (auto* pVogel : v)
	{
		pVogel->getKlasse();
		pVogel->fliege();

		// Singvogel* pSV = static_cast<Singvogel*>(pVogel);
		
		auto* pSV = dynamic_cast<Singvogel*>(pVogel);

		if (pSV)
			pSV->singe();

		auto* pSSV = dynamic_cast<SprechenderSingvogel*>(pVogel);

		if (pSSV)
			pSSV->sprich();

		delete pVogel;
	}

	cout << endl;

	v.clear();

	A* pA = new A();
	B* pB = new B();
	C* pC = new C();

	delete pA;
	delete pB;
	delete pC;

	cout << endl;

	vector<A*> va = vector<A*>();

	va.push_back(new A());
	va.push_back(new B());
	va.push_back(new C());

	for (auto* a : va)
	{
		a->ausgabe();

		delete a;
	}

	cout << endl;

	return EXIT_SUCCESS;
}
