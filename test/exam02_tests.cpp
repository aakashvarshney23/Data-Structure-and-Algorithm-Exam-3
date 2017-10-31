//
// Created by gokay on 10/5/17.
//

#include "gtest/gtest.h"

TEST(basic_check, test_eq) {
EXPECT_EQ(1, 1);
}

TEST(basic_check, test_neq) {
EXPECT_NE(1, 0);
}

//#include "doubly_linked_list.h"
//#include "node.h"
//
//class NodeFixture : public ::testing::Test {
//protected:
//    virtual void TearDown() {
//    }
//
//    virtual void SetUp() {
//        test_num=1;
//        test_numbers=std::vector<unsigned>({1,2,3,4,5,6,7,8,9,10});
//        Lposition = test_numbers.begin();
//        Rposition = test_numbers.end();
//        list1 =new doubly_linked_list;
//        list2 =new doubly_linked_list(test_num);
//        list3 = new doubly_linked_list(test_numbers);
//        list4= new doubly_linked_list(*list3);
//    }
//
//public:
//    NodeFixture() : Test() {
//    }
//
//    virtual ~NodeFixture() {
//
//    }
//    doubly_linked_list * list1, *list2, *list3, *list4;
//    std::vector <unsigned> test_numbers;
//    unsigned test_num;
//    std::vector<unsigned>::iterator Lposition, Rposition;
//
//};
//TEST_F(NodeFixture, construct_with_check_size) {
//    EXPECT_EQ(list1->get_size(), 0);
//    EXPECT_EQ(list2->get_size(),1);
//    EXPECT_EQ(list3->get_size(),test_numbers.size());
//    EXPECT_EQ(list4->get_size(),list3->get_size());
//}
//
////unsure how to test destructor
//
//TEST_F(NodeFixture, getters){
//    //EXPECT_EQ(list1,); need exception handling: ASSERT_THROW()?
//    EXPECT_EQ(list2->get_data(0),test_num);
//    EXPECT_EQ(list3->get_data(4),test_numbers[4]);//could check list in a loop
//    EXPECT_EQ(list3->get_set(2,5),std::vector<unsigned>(Lposition,Rposition));
//
//
//}
