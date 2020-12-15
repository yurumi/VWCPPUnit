#pragma once

struct ParameterStruct
{
    int x;
    int y;
    int z;

    virtual bool operator==(const ParameterStruct &other) const {
        return x == other.x && y == other.y && z == other.z;
    }
};

class Actor
{
    public:
        virtual void doIt(ParameterStruct p) = 0;
};
