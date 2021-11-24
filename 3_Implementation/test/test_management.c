#include"Canteen_Management_system.h"
#include"unity_internals.h"
#include"unity.h"

void setUp(){}

void tearDown(){}


void test_addition(void){
    TEST_ASSERT_EQUAL(pass,addition(67, "Shruthi", "Icecream"));
}

void test_vieworder(void){
    TEST_ASSERT_EQUAL(pass,vieworder());
}

void test_searchfooditem(void){
    TEST_ASSERT_EQUAL(fail,searchfooditem(-2));
    TEST_ASSERT_EQUAL(pass,searchfooditem(95));
}



void test_deleteorder(void){
    TEST_ASSERT_EQUAL(pass,deleteorder(95));
}        

void test_deliverorder(void){
    TEST_ASSERT_EQUAL(pass,deliverorder(95));
}

int main(){
    UNITY_BEGIN();

    RUN_TEST(test_addition);
    RUN_TEST(test_searchfooditem);
    RUN_TEST(test_deliverorder);
    RUN_TEST(test_deleteorder);
    RUN_TEST(test_vieworder);
    
    return UNITY_END();
}
