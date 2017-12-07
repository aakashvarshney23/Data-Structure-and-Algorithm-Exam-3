#include "gtest\gtest.h"
#include "data_structure.h"

class tests_for_a_5 : public ::testing::Test {
protected:
    virtual void TearDown() {
        delete positive10;
        delete positive100;
        delete positive1000;
        delete empty;
    }

    virtual void SetUp() {
        empty = new data_structure();

        positive10 = new data_structure("3,4,5,3,6,8,5,9,1,4");

        positive100 = new data_structure("78,56,63,61,9,20,86,61,85,44,21,4,76,88,63,42,97,38,1,78,52,9,55,12,58,95,95,42,82,86,1,50,62,47,46,80,42,66,39,33,77,54,23,12,21,62,71,81,10,63,11,68,8,89,50,21,49,87,62,77,10,60,10,9,73,8,55,5,17,47,64,4,55,76,56,1,2,13,60,90,18,40,20,25,46,38,84,29,61,15,62,62,29,34,85,13,15,52,48,15,88,83,1,12,3,97,73,13,42,49,13,85,33,83,9,27,31,81,24,24,94,88,6,18,3,83,12,2,43,78,58,82,75,66,22,84,68,9,74,96,28,86,98,72,93,18,78,82,65,33,16,80,42,84,39,100,95,5,79,95,18,96,21,68,18,53,16,69,30,56,1,57,64,15,49,84,71,13,88,70,93,63,80,16,100,91,59,46,71,98,87,56,36,66,41,78,24,89,94,52");

        positive1000 = new data_structure("944,616,428,209,601,29,435,529,788,821,923,552,607,857,277,10,876,303,379,82");
    }

public:
    tests_for_a_5() : Test() {
    }
    virtual ~tests_for_a_5() {
    }
    data_structure *positive10, *positive100, *positive1000, *empty;
};

class tests_for_a_8 : public ::testing::Test {
protected:
    virtual void TearDown() {
        delete mixed100;
        delete mixed1M;
        delete pi1000;
    }

    virtual void SetUp() {
        mixed100 = new data_structure();
        pi1000 = new data_structure();
        mixed1M = new data_structure();
        pi1m = new data_structure();

        std::stringstream("") >> pi1m;

        mixed100 = new data_structure("-70,85,77,69,52,-83,-24,-89,-4,-24,37,71,-51,21,-82,-17,11,-19,49,-11,41,48,44,96,73,91,-9,-32,-55,-31,10,-62,-94,-29,66,-55,-72,29,35,-5,70,-38,5,10,0,-24,-5,-74,67,-91,-72,-38,-4,80,94,93,-25,46,-82,56,-84,58,-47,-11,77,-7,-33,-59,5,86,73,73,-100,-13,-76,98,-67,31,-9,59,64,24,76,-52,38,24,-46,20,73,-65,45,75,-58,-29,64,94,-61,51,28,15");

        std::stringstream("3,1,4,1,5,9,2,6,5,3,5,8,9,7,9,3,2,3,8,4,6,2,6,4,3,3,8,3,2,7,9,5,0,2,8,8,4,1,9,7,1,6,9,3,9,9,3,7,5,1,0,5,8,2,0,9,7,4,9,4,4,5,9,2,3,0,7,8,1,6,4,0,6,2,8,6,2,0,8,9,9,8,6,2,8,0,3,4,8,2,5,3,4,2,1,1,7,0,6,7,9,8,2,1,4,8,0,8,6,5,1,3,2,8,2,3,0,6,6,4,7,0,9,3,8,4,4,6,0,9,5,5,0,5,8,2,2,3,1,7,2,5,3,5,9,4,0,8,1,2,8,4,8,1,1,1,7,4,5,0,2,8,4,1,0,2,7,0,1,9,3,8,5,2,1,1,0,5,5,5,9,6,4,4,6,2,2,9,4,8,9,5,4,9,3,0,3,8,1,9,6,4,4,2,8,8,1,0,9,7,5,6,6,5,9,3,3,4,4,6,1,2,8,4,7,5,6,4,8,2,3,3,7,8,6,7,8,3,1,6,5,2,7,1,2,0,1,9,0,9,1,4,5,6,4,8,5,6,6,9,2,3,4,6,0,3,4,8,6,1,0,4,5,4,3,2,6,6,4,8,2,1,3,3,9,3,6,0,7,2,6,0,2,4,9,1,4,1,2,7,3,7,2,4,5,8,7,0,0,6,6,0,6,3,1,5,5,8,8,1,7,4,8,8,1,5,2,0,9,2,0,9,6,2,8,2,9,2,5,4,0,9,1,7,1,5,3,6,4,3,6,7,8,9,2,5,9,0,3,6,0,0,1,1,3,3,0,5,3,0,5,4,8,8,2,0,4,6,6,5,2,1,3,8,4,1,4,6,9,5,1,9,4,1,5,1,1,6,0,9,4,3,3,0,5,7,2,7,0,3,6,5,7,5,9,5,9,1,9,5,3,0,9,2,1,8,6,1,1,7,3,8,1,9,3,2,6,1,1,7,9,3,1,0,5,1,1,8,5,4,8,0,7,4,4,6,2,3,7,9,9,6,2,7,4,9,5,6,7,3,5,1,8,8,5,7,5,2,7,2,4,8,9,1,2,2,7,9,3,8,1,8,3,0,1,1,9,4,9,1,2,9,8,3,3,6,7,3,3,6,2,4,4,0,6,5,6,6,4,3,0,8,6,0,2,1,3,9,4,9,4,6,3,9,5,2,2,4,7,3,7,1,9,0,7,0,2,1,7,9,8,6,0,9,4,3,7,0,2,7,7,0,5,3,9,2,1,7,1,7,6,2,9,3,1,7,6,7,5,2,3,8,4,6,7,4,8,1,8,4,6,7,6,6,9,4,0,5,1,3,2,0,0,0,5,6,8,1,2,7,1,4,5,2,6,3,5,6,0,8,2,7,7,8,5,7,7,1,3,4,2,7,5,7,7,8,9,6,0,9,1,7,3,6,3,7,1,7,8,7,1,4,6,8,4,4,0,9,0,1,2,2,4,9,5,3,4,3,0,1,4,6,5,4,9,5,8,5,3,7,1,0,5,0,7,9,2,2,7,9,6,8,9,2,5,8,9,2,3,5,4,2,0,1,9,9,5,6,1,1,2,1,2,9,0,2,1,9,6,0,8,6,4,0,3,4,4,1,8,1,5,9,8,1,3,6,2,9,7,7,4,7,7,1,3,0,9,9,6,0,5,1,8,7,0,7,2,1,1,3,4,9,9,9,9,9,9,8,3,7,2,9,7,8,0,4,9,9,5,1,0,5,9,7,3,1,7,3,2,8,1,6,0,9,6,3,1,8,5,9,5,0,2,4,4,5,9,4,5,5,3,4,6,9,0,8,3,0,2,6,4,2,5,2,2,3,0,8,2,5,3,3,4,4,6,8,5,0,3,5,2,6,1,9,3,1,1,8,8,1,7,1,0,1,0,0,0,3,1,3,7,8,3,8,7,5,2,8,8,6,5,8,7,5,3,3,2,0,8,3,8,1,4,2,0,6,1,7,1,7,7,6,6,9,1,4,7,3,0,3,5,9,8,2,5,3,4,9,0,4,2,8,7,5,5,4,6,8,7,3,1,1,5,9,5,6,2,8,6,3,8,8,2,3,5,3,7,8,7,5,9,3,7,5,1,9,5,7,7,8,1,8,5,7,7,8,0,5,3,2,1,7,1,2,2,6,8,0,6,6,1,3,0,0,1,9,2,7,8,7,6,6,1,1,1,9,5,9,0,9,2,1,6,4,2,0,1,9,8,9") >> *pi1000;

        std::stringstream("573465,-51137,-75965,135311,447185,247822,538613,-154943,837711,-614599,768207,119949,61401,738106,788059,-824263,193948,752352,451554,-604008") >> *mixed1M;

    }

public:
    tests_for_a_8() : Test() {
    }

    virtual ~tests_for_a_8() {
    }
    data_structure *mixed100, *pi1000, *mixed1M, *pi1m;
};



TEST(crash_test_5, string_constructor)
{
    data_structure string_test;
    string_test = data_structure("1,2,3,4,5,6");
    string_test = data_structure("10,20,30,40,50,60");
    string_test = data_structure("100,200,300,400,500,600");
    string_test = data_structure("1000,2000,3000,4000,5000,6000");
    string_test = data_structure("10000,20000,30000,40000,50000,60000");
    string_test = data_structure("100000,200000,300000,400000,500000,600000");
}

TEST(crash_test_5, destructor)
{
    auto *destructor_test = new data_structure("1,2,3,4,5,6");
    delete destructor_test;
}

TEST(crash_test_5, simple_print)
{
    auto *empty_print_test = new data_structure();
    std::cout << *empty_print_test << std::endl;
    delete empty_print_test;

    auto *print_test = new data_structure("1,2,3");
    testing::internal::CaptureStdout();
    std::cout << *print_test <<std::endl;
    testing::internal::GetCapturedStdout();
    delete print_test;
}

TEST(crash_test_5, simple_sort)
{
    auto *empty_sort_test =new data_structure();
    empty_sort_test->sort();
    delete empty_sort_test;

    auto *sort_test = new data_structure("24,15,36");
    sort_test->sort();
    delete sort_test;
}

TEST(crash_test_5, frequency){
    auto *test_structure = new data_structure();
    test_structure->frequency(1);
    delete test_structure;

    test_structure = new data_structure("14,33,23,43,14,95,12");
    test_structure->frequency(14);
    test_structure->frequency(23);
    test_structure->frequency(0);
    delete test_structure;
}

TEST(crash_test_5, most_frequent){
    auto *test_structure = new data_structure();
    test_structure->most_frequent;
    delete test_structure;

    test_structure = new data_structure("14,33,23,43,14,95,33");
    test_structure->most_frequent();
    delete test_structure;
}

TEST(crash_test_5, least_frequent){
    auto *test_structure = new data_structure();
    test_structure->least_frequent;
    delete test_structure;

    test_structure = new data_structure("14,33,23,43,14,95,33");
    test_structure->least_frequent();
    delete test_structure;
}

TEST_F(tests_for_a_5, frequency){
    EXPECT_EQ(0, empty->frequency(0));
    EXPECT_EQ(0, empty->frequency(100));

    EXPECT_EQ(3, positive10->frequency(0));
    EXPECT_EQ(1, positive10->frequency(1));
    EXPECT_NE(1, positive10->frequency(2));
    EXPECT_EQ(0, positive10->frequency(3));
    EXPECT_EQ(2, positive10->frequency(4));
    EXPECT_EQ(1, positive10->frequency(5));
    EXPECT_EQ(1, positive10->frequency(6));
    EXPECT_EQ(3, positive10->frequency(7));
    EXPECT_EQ(3, positive10->frequency(8));
    EXPECT_EQ(3, positive10->frequency(9));
    EXPECT_EQ(3, positive10->frequency(10));

    EXPECT_EQ(3, positive100->frequency(61));
    EXPECT_EQ(3, positive100->frequency(34));
    EXPECT_EQ(3, positive100->frequency(80));
    EXPECT_EQ(3, positive100->frequency(29));
    EXPECT_EQ(3, positive100->frequency(93));
    EXPECT_EQ(3, positive100->frequency(94));
    EXPECT_EQ(3, positive100->frequency(49));
    EXPECT_EQ(3, positive100->frequency(78));
    EXPECT_EQ(3, positive100->frequency(6));
    EXPECT_EQ(3, positive100->frequency(53));

    EXPECT_EQ(0, positive1000->frequency(435));
    EXPECT_EQ(1, positive1000->frequency(529));
    EXPECT_EQ(2, positive1000->frequency(788));
    EXPECT_EQ(2, positive1000->frequency(821));
    EXPECT_EQ(1, positive1000->frequency(923));
}

TEST_F(tests_for_a_5, most_frequent){
    EXPECT_EQ(0, empty->most_frequent());
    EXPECT_EQ(3, positive10->most_frequent());
    EXPECT_EQ(3, positive100->most_frequent());
    EXPECT_EQ(3, positive1000->most_frequent());
}

TEST_F(tests_for_a_5, least_frequent){
    EXPECT_EQ(0, empty->least_frequent());
    EXPECT_EQ(0, positive10->least_frequent());
    EXPECT_EQ(0, positive100->least_frequent());
    EXPECT_EQ(0, positive1000->least_frequent());
}

TEST_F(tests_for_a_5, empty_print){
    testing::internal::CaptureStdout();
    std::cout << *empty;
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ("", output);
}

TEST_F(tests_for_a_5, sort_and_print) {
    positive10->sort();
    positive100->sort();
    positive1000->sort();

    testing::internal::CaptureStdout();
    std::cout << *positive10;
    std::string print_output = testing::internal::GetCapturedStdout();
    EXPECT_EQ("l:3,o:2, :1,H:1,W:1,d:1,e:1,r:1", print_output);

    testing::internal::CaptureStdout();
    std::cout << *positive100;
    print_output = testing::internal::GetCapturedStdout();
    EXPECT_EQ("l:3,o:2, :1,H:1,W:1,d:1,e:1,r:1", print_output);

    testing::internal::CaptureStdout();
    std::cout << *positive1000;
    print_output = testing::internal::GetCapturedStdout();
    EXPECT_EQ("A:2,C:2,E:2,R:2, :1,I:1,M:1,P:1,T:1,Y:1", print_output);
}

TEST(crash_test_8, stream_constructor)
{
    auto *stream_test1 = new data_structure();
    auto *stream_test2 = new data_structure();
    // Initial Fill
    std::stringstream("1,2,3,4,5") >> *stream_test1;
    std::stringstream("-1,0,1") >> *stream_test2;

    // Overwrite test
    std::stringstream("-55,0,23,5,23,-94,992,-423,532,49,58,87,36,29") >> *stream_test2;

    delete stream_test1, stream_test2;
}

TEST(crash_test_8, frequency){
    auto *test_structure = new data_structure();
    test_structure->frequency(17);

    std::stringstream("-55,0,23,5,23,-94,992,-423,532,49,17,87,36,29") >> *test_structure;
    test_structure->frequency(-1);
    test_structure->frequency(0);
    test_structure->frequency(1);
    test_structure->frequency(17);

    delete test_structure;
}

TEST_F(tests_for_a_8, frequency){
    EXPECT_EQ(1, mixed100->frequency('h'));
    EXPECT_EQ(1, mixed100->frequency('e'));
    EXPECT_EQ(2, mixed100->frequency('l'));
    EXPECT_EQ(1, mixed100->frequency('o'));
    EXPECT_EQ(0, mixed100->frequency('t'));

    EXPECT_NE(0,  pi1000->frequency('\n'));
    EXPECT_EQ(1,  pi1000->frequency('\''));
    EXPECT_EQ(1,  pi1000->frequency('v'));
    EXPECT_EQ(4,  pi1000->frequency('\n'));
    EXPECT_EQ(24, pi1000->frequency(' '));
    EXPECT_EQ(10, pi1000->frequency('c'));
    EXPECT_EQ(2,  pi1000->frequency('.'));
    EXPECT_EQ(8,  pi1000->frequency('t'));
    EXPECT_EQ(1,  pi1000->frequency('T'));
    EXPECT_EQ(18, pi1000->frequency('e'));
}

TEST_F(tests_for_a_8, most_frequent){
    EXPECT_EQ('l', mixed100->most_frequent());
    EXPECT_EQ(' ', pi1000->most_frequent());
}

TEST_F(tests_for_a_8, least_frequent){
    EXPECT_EQ('o', mixed100->least_frequent());
    EXPECT_EQ('v', pi1000->least_frequent());
}

TEST_F(tests_for_a_8, sort_and_print) {
    mixed100->sort();
    pi1000->sort();

    testing::internal::CaptureStdout();
    std::cout << *mixed100;
    std::string hello_output = testing::internal::GetCapturedStdout();
    EXPECT_EQ("l:2,e:1,h:1,o:1", hello_output);

    testing::internal::CaptureStdout();
    std::cout << *pi1000;
    std::string limrick_output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(" :24,e:18,a:13,o:13,c:10,s:10,l:9,n:9,t:8,i:7,m:6,h:5,\n:4,d:4,r:3,u:3,.:2,I:2,g:2,k:2,p:2,':1,A:1,B:1,S:1,T:1,q:1,v:1", limrick_output);
}

TEST_F(tests_for_a_8, overwrite_print){
    auto *empty_print_test = new data_structure();
    testing::internal::CaptureStdout();
    std::cout << *empty_print_test;

    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ("", output);
    delete empty_print_test;

    std::stringstream("mixed100") >> *empty_print_test;
    empty_print_test->sort();
    testing::internal::CaptureStdout();
    std::cout << *empty_print_test;
    std::string hello_output = testing::internal::GetCapturedStdout();
    EXPECT_EQ("l:2,e:1,h:1,o:1", hello_output);

    std::stringstream("Hello World") >> *empty_print_test;
    empty_print_test->sort();
    testing::internal::CaptureStdout();
    std::cout << *empty_print_test;
    std::string hello_world_output = testing::internal::GetCapturedStdout();
    EXPECT_EQ("l:3,o:2, :1,H:1,W:1,d:1,e:1,r:1", hello_world_output);
}