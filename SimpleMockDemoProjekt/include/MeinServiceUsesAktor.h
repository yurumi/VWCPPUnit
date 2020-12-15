#pragma once
#include "Aktor.h"


class MeinServiceUsesAktor
{
    private:
        Aktor& aktor;

    public:
        MeinServiceUsesAktor(Aktor& aktor);

        // erzeugt ParameterObject und setzt für x = value + 1, y = value + 2; ruft doIt mit diesen Params auf
        void foo(int value);
        void bar(int value);
};
