#pragma once
#include "Singvogel.h"

class SprechenderSingvogel :
    public Singvogel
{
public:
    ~SprechenderSingvogel();

    void getKlasse() const override;

    void singe() const override;

    virtual void sprich() const;
};

