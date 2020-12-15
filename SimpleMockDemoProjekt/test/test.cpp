#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "MockActor.h"
#include "MyServiceUsesActor_test.h"
#include "Actor.h"

using namespace ::testing;

TEST_F(MyServiceUsesActor_test, fooCalled_ExpectActorDoItCalled) {
    int value(5);

    // ON_CALL(actor_mock, doIt(_));
    EXPECT_CALL(actor_mock, doIt(_))
        .Times(1);

    objectUnderTest->foo(value);

    EXPECT_TRUE(true);
}

TEST_F(MyServiceUsesActor_test, fooCalled_ExpectActorDoItWithParamsCorrect) {
    int value(5);
    ParameterStruct expectedParams;
    expectedParams.x = 6;
    expectedParams.y = 7;
    expectedParams.z = 8;

    // ON_CALL(actor_mock, doIt(_));
    // EXPECT_CALL(actor_mock, doIt(TypedEq<ParameterStruct>(expectedParams)))
    EXPECT_CALL(actor_mock, doIt(expectedParams))
        .Times(1);

    // EXPECT_CALL(mock-object, method (matchers)?)
    //  .With(multi-argument-matcher)  ?
    //  .Times(cardinality)            ?
    //  .InSequence(sequences)         *
    //  .After(expectations)           *
    //  .WillOnce(action)              *
    //  .WillRepeatedly(action)        ?
    //  .RetiresOnSaturation();        ?
    // EXPECT_CALL(actor_mock, doIt(TypedEq<ParameterStruct>(expectedParams))

    objectUnderTest->foo(value);

    // EXPECT_TRUE(true);
}
