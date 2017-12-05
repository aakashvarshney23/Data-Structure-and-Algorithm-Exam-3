#include "gtest/gtest.h"
#include "data_structure.h"

class ConstructedValues : public ::testing::Test {
protected:
    virtual void TearDown() {
    }

    virtual void SetUp() {
        // Construct structures both empty and with string inputs;
        hello = new data_structure();
        hello_world = new data_structure("Hello World");
        icecream_party = new data_structure("ICECREAM PARTY");
        limrick = new data_structure();

        // Stream in a string to store in the structure
        std::stringstream("hello") >> hello;
        std::stringstream("The limerick packs laughs anatomical\nInto space that is quite economical.\nBut the good ones I've seen\nSo seldom are clean\nAnd the clean ones so seldom are comical.") >> limrick;
    }

public:
    ConstructedValues() : Test() {
    }

    virtual ~TestFixture() {

    }
    data_structure *hello, *hello_world, *icecream_party, *limrick;
};

TEST(constructor, string_constructor)
{
    data_structure *string_test1 = new data_structure("Debugger");
    data_structure *string_test2 = new data_structure("Is Love");
}

TEST(constructor, stream_constructor)
{
    data_structure *stream_test1 = new data_structure();
    data_structure *stream_test2 = new data_structure();

    std::stringstream("Debugger") >> *stream_test1;
    std::stringstream("Is Life") >> *stream_test2;
    std::stringstream("Is Death") >> *stream_test2;
}

TEST_F(ConstructedValues, print) {

}

TEST_F(ConstructedValues, frequency){

}

TEST_F(ConstructedValues, most_frequent){

}

TEST_F(ConstructedValues, least_frequent){

}

TEST_F(ConstructedValues, sort) {

}



