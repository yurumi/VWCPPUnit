#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "MockAktor.h"
#include "MeinServiceUsesAktor_test.h"
#include "Aktor.h"

using namespace ::testing;

TEST_F(MeinServiceUsesAktor_test, fooCalled_ExpectAktorDoItCalled) {
    int value(5);

    // ON_CALL(aktor_mock, doIt(_));
    EXPECT_CALL(aktor_mock, doIt(_))
        .Times(1);

    objectUnderTest->foo(value);

    EXPECT_TRUE(true);
}

TEST_F(MeinServiceUsesAktor_test, fooCalled_ExpectAktorDoItWithParamsCorrect) {
    int value(5);
    ParameterStruct expectedParams;
    expectedParams.x = 6;
    expectedParams.y = 7;
    expectedParams.z = 8;

    // ON_CALL(aktor_mock, doIt(_));
    // EXPECT_CALL(aktor_mock, doIt(TypedEq<ParameterStruct>(expectedParams)))
    EXPECT_CALL(aktor_mock, doIt(expectedParams))
        .Times(1);

    // EXPECT_CALL(mock-object, method (matchers)?)
    //  .With(multi-argument-matcher)  ?
    //  .Times(cardinality)            ?
    //  .InSequence(sequences)         *
    //  .After(expectations)           *
    //  .WillOnce(action)              *
    //  .WillRepeatedly(action)        ?
    //  .RetiresOnSaturation();        ?
    // EXPECT_CALL(aktor_mock, doIt(TypedEq<ParameterStruct>(expectedParams))

    objectUnderTest->foo(value);

    // EXPECT_TRUE(true);
}
