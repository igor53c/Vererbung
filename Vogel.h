#pragma once
#include <iostream>

using namespace std;

class Vogel
{
public:
	~Vogel();

	virtual void getKlasse() const;

	void fliege() const;
};

