#pragma once
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "Actor.h"
#include <exception>

class MockActor : public Actor {
    public:
        MOCK_METHOD1(doIt, void(ParameterStruct p));
        // MOCK_METHOD1(doIt, void(ParameterStruct p), (override), p_soll);
};
