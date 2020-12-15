#pragma once
#include "Actor.h"


class MyServiceUsesActor
{
    private:
        Actor& actor;

    public:
        MyServiceUsesActor(Actor& actor);

        // erzeugt ParameterObject und setzt für x = value + 1, y = value + 2; ruft doIt mit diesen Params auf
        void foo(int value);
        void bar(int value);
};
