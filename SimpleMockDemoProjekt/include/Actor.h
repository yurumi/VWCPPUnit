#pragma once

struct ParameterStruct
{
    int x;
    int y;
    int z;

    ParameterStruct(){}
    ParameterStruct(int x, int y, int z) : x(x), y(y), z(z) {}

    virtual bool operator==(const ParameterStruct &other) const {
        return x == other.x && y == other.y && z == other.z;
    }
};

class Actor
{
    public:
        virtual void doIt(ParameterStruct p) = 0;
};
