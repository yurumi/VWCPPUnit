#pragma once
#include "MeinServiceUsesAktor.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "MockAktor.h"

class MeinServiceUsesAktor_test : public ::testing::Test
{
    public:
        MeinServiceUsesAktor_test(){}

    protected:
        MeinServiceUsesAktor* objectUnderTest;
        MockAktor aktor_mock;

        void SetUp() override {
            objectUnderTest = new MeinServiceUsesAktor(aktor_mock);
        }

        void TearDown() override {
            delete objectUnderTest;
        }
};
