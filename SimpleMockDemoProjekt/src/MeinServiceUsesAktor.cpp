#include "MeinServiceUsesAktor.h"


MeinServiceUsesAktor::MeinServiceUsesAktor(Aktor& aktor) : aktor(aktor){}

void MeinServiceUsesAktor::foo(int value)
{
    ParameterStruct params;
    //  ParameterStruct params(value + 1, value + 2, value + 3);
    aktor.doIt(params);
}

void MeinServiceUsesAktor::bar(int value)
{
}
