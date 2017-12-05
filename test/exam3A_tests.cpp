#include "gtest/gtest.h"
#include "data_structure.h"

class ConstructedValues : public ::testing::Test {
protected:
    virtual void TearDown() {
        delete hello;
        delete hello_world;
        delete icecream_party;
        delete limrick;
    }

    virtual void SetUp() {
        // Construct structures both empty and with string inputs;
        hello = new data_structure();
        hello_world = new data_structure("Hello World");
        icecream_party = new data_structure("ICECREAM PARTY");
        limrick = new data_structure();

        // Stream in a string to store in the structure
        std::stringstream("hello") >> *hello;
        std::stringstream("The limerick packs laughs anatomical\n"
                                  "Into space that is quite economical.\n"
                                  "But the good ones I've seen\n"
                                  "So seldom are clean\n"
                                  "And the clean ones so seldom are comical.") >> *limrick;
    }

public:
    ConstructedValues() : Test() {
    }

    virtual ~ConstructedValues() {

    }
    data_structure *hello, *hello_world, *icecream_party, *limrick;
};

TEST(crash_test, string_constructor)
{
    data_structure *string_test1 = new data_structure("Debugger");
    data_structure *string_test2 = new data_structure("Is Love");
}

TEST(crash_test, stream_constructor)
{
    data_structure *stream_test1 = new data_structure();
    data_structure *stream_test2 = new data_structure();

    std::stringstream("Debugger") >> *stream_test1;
    std::stringstream("Is Life") >> *stream_test2;
    std::stringstream("Is Death") >> *stream_test2;
}

TEST(crash_test, destructor)
{
    data_structure *string_test1 = new data_structure("Debugger");
    delete string_test1;
}

TEST(crash_test, simple_print)
{
    data_structure *empty_print_test = new data_structure();
    std::cout << *empty_print_test << std::endl;

    data_structure *print_test = new data_structure("DAS");
    std::cout << *print_test <<std::endl;
}

TEST(crash_test, simple_sort)
{
    data_structure *empty_sort_test =new data_structure();
    empty_sort_test->sort();

    data_structure *sort_test = new data_structure("abacd");
    sort_test->sort();
}

TEST(crash_test, frequency){
    data_structure *test_structure = new data_structure();
    test_structure->frequency('a');
    std::stringstream("Hello") >> *test_structure;
    test_structure->frequency('a');
    test_structure->frequency('l');
}

TEST(crash_test, most_frequent){
    data_structure *test_structure = new data_structure();
    test_structure->most_frequent();
    std::stringstream("help me") >> *test_structure;
    test_structure->most_frequent();
}

TEST(crash_test, least_frequent){
    data_structure *test_structure = new data_structure();
    test_structure->least_frequent();
    std::stringstream("I'm stuck in a program") >> *test_structure;
    test_structure->least_frequent();
}


TEST_F(ConstructedValues, frequency){
    EXPECT_EQ(1, hello->frequency('h'));
    EXPECT_EQ(1, hello->frequency('e'));
    EXPECT_EQ(2, hello->frequency('l'));
    EXPECT_EQ(1, hello->frequency('o'));
    EXPECT_EQ(0, hello->frequency('t'));

    EXPECT_EQ(1, hello_world->frequency('H'));
    EXPECT_NE(1, hello_world->frequency('h'));
    EXPECT_EQ(0, hello_world->frequency('h'));
    EXPECT_EQ(2, hello_world->frequency('o'));
    EXPECT_EQ(1, hello_world->frequency('d'));
    EXPECT_EQ(1, hello_world->frequency(' '));
    EXPECT_EQ(3, hello_world->frequency('l'));

    EXPECT_EQ(0, icecream_party->frequency('z'));
    EXPECT_EQ(1, icecream_party->frequency('I'));
    EXPECT_EQ(2, icecream_party->frequency('A'));
    EXPECT_EQ(2, icecream_party->frequency('E'));
    EXPECT_EQ(1, icecream_party->frequency('Y'));

    EXPECT_NE(0,  limrick->frequency('\n'));
    EXPECT_EQ(1,  limrick->frequency('\''));
    EXPECT_EQ(1,  limrick->frequency('v'));
    EXPECT_EQ(4,  limrick->frequency('\n'));
    EXPECT_EQ(24, limrick->frequency(' '));
    EXPECT_EQ(10, limrick->frequency('c'));
    EXPECT_EQ(2,  limrick->frequency('.'));
    EXPECT_EQ(8,  limrick->frequency('t'));
    EXPECT_EQ(1,  limrick->frequency('T'));
    EXPECT_EQ(18, limrick->frequency('e'));
}

TEST_F(ConstructedValues, most_frequent){
    EXPECT_EQ('l', hello->most_frequent());
    EXPECT_EQ('l', hello_world->most_frequent());
    EXPECT_EQ('A', icecream_party->most_frequent());
    EXPECT_EQ(' ', limrick->most_frequent());
}

TEST_F(ConstructedValues, least_frequent){
    EXPECT_EQ('o', hello->least_frequent());
    EXPECT_EQ('r', hello_world->least_frequent());
    EXPECT_EQ('Y', icecream_party->least_frequent());
    EXPECT_EQ('v', limrick->least_frequent());
}

TEST_F(ConstructedValues, empty_print){
    data_structure *empty_print_test = new data_structure();
    testing::internal::CaptureStdout();
    std::cout << *empty_print_test;
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ("", output);
    delete empty_print_test;
}

TEST_F(ConstructedValues, sort_and_print) {
    hello->sort();
    hello_world->sort();
    icecream_party->sort();
    limrick->sort();

    testing::internal::CaptureStdout();
    std::cout << *hello;
    std::string hello_output = testing::internal::GetCapturedStdout();
    EXPECT_EQ("l:2,e:1,h:1,o:1", hello_output);

    testing::internal::CaptureStdout();
    std::cout << *hello_world;
    std::string hello_world_output = testing::internal::GetCapturedStdout();
    EXPECT_EQ("l:3,o:2, :1,H:1,W:1,d:1,e:1,r:1", hello_world_output);

    testing::internal::CaptureStdout();
    std::cout << *icecream_party;
    std::string icecream_output = testing::internal::GetCapturedStdout();
    EXPECT_EQ("A:2,C:2,E:2,R:2, :1,I:1,M:1,P:1,T:1,Y:1", icecream_output);

    testing::internal::CaptureStdout();
    std::cout << *limrick;
    std::string limrick_output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(" :24,e:18,a:13,o:13,c:10,s:10,l:9,n:9,t:8,i:7,m:6,h:5,\n:4,d:4,r:3,u:3,.:2,I:2,g:2,k:2,p:2,':1,A:1,B:1,S:1,T:1,q:1,v:1", limrick_output);
}