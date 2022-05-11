#pragma once
#include "Vogel.h"
class Singvogel :
    public Vogel
{
public:
    ~Singvogel();

    void getKlasse() const override;

    virtual void singe() const;
};

