#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "MockActor.h"
#include "MyServiceUsesActor_test.h"
#include "../include/Actor.h"
#include <iostream>

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
    ParameterStruct expectedParam;
    expectedParam.x = 6;
    expectedParam.y = 7;
    expectedParam.z = 8;

    ParameterStruct argParam;
    EXPECT_CALL(actor_mock, doIt)
        .WillRepeatedly(SaveArg<0>(&argParam));

    objectUnderTest->foo(value);

    EXPECT_EQ(expectedParam, argParam);
}

// TEST_F(MyServiceUsesActor_test, barCalled_ExpectActorDoItWithParamsCorrect) {
//     int value(5);
//     ParameterStruct expectedParam;
//     expectedParam.x = 6;
//     expectedParam.y = 7;
//     expectedParam.z = 8;

//     ParameterStruct argParam;
//     EXPECT_CALL(actor_mock, doIt(_))
//         .WillRepeatedly(Invoke(this, ));

//     objectUnderTest->foo(value);

//     EXPECT_EQ(expectedParam, argParam);
// }

INSTANTIATE_TEST_CASE_P(params, MyServiceUsesActor_test, testing::ValuesIn(params));

TEST_P(MyServiceUsesActor_test, p_test) {
    const ParamTest& p = this->GetParam();
    std::cout << p.value << " " << p.expected.x << std::endl;
}
