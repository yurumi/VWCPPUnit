#pragma once

#include "../include/MyServiceUsesActor.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "MockActor.h"


struct ParamTest {
    int value;
    ParameterStruct expected;

    ParamTest(int value, ParameterStruct expected) : value(value), expected(expected) {}
};

ParamTest params[] = {ParamTest(1, ParameterStruct(1, 2, 3)),
                      ParamTest(2, ParameterStruct(99, 4, 5)),
                      ParamTest(3, ParameterStruct(6, 9, 33)),};


class MyServiceUsesActor_test : public ::testing::TestWithParam<ParamTest>
{
    public:
        MyServiceUsesActor_test(){}

        void captureFunction();

    protected:
        MyServiceUsesActor* objectUnderTest;
        MockActor actor_mock;

        void SetUp() override {
            objectUnderTest = new MyServiceUsesActor(actor_mock);
        }

        void TearDown() override {
            delete objectUnderTest;
        }
};
