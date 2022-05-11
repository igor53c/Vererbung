#pragma once
#include "K1.h"
#include "K2.h"

class V12 :
    public K1, public K2
{
public:
    void K1_f();
    void K2_f();
};

