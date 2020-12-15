#pragma once
#include "MyServiceUsesActor.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "MockActor.h"

class MyServiceUsesActor_test : public ::testing::Test
{
    public:
        MyServiceUsesActor_test(){}

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
