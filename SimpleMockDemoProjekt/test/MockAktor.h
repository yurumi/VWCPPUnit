#pragma once
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "Aktor.h"
#include <exception>

class MockAktor : public Aktor {
    public:
        MOCK_METHOD1(doIt, void(ParameterStruct p));
        // MOCK_METHOD1(doIt, void(ParameterStruct p), (override), p_soll);
};
