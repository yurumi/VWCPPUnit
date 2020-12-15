#include "MyServiceUsesActor.h"


MyServiceUsesActor::MyServiceUsesActor(Actor& actor) : actor(actor){}

void MyServiceUsesActor::foo(int value)
{
    ParameterStruct params;
    //  ParameterStruct params(value + 1, value + 2, value + 3);
    actor.doIt(params);
}

void MyServiceUsesActor::bar(int value)
{
}
