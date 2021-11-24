/**
 * @file test.h
 * @author Akhil Pulicheri
 * @brief A program to play tictoctoe game.
 * @version 0.1
 * @date 2021-11-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "unity.h"
#include "game.h"

#define PROJECT_NAME    "TIC TAC TOE"

void setUp()
{
    

}

void tearDown()
{

}

void test_successfullWin()
{
     
     TEST_ASSERT_EQUAL(1, markplay());
}
void test_successfuldraw()
{
    
    TEST_ASSERT_EQUAL(0,markplay());
}
void test_Emptyboard()
{
  
    TEST_ASSERT_EQUAL(-1,markplay());
}
int main()
{
  UNITY_BEGIN();
  RUN_TEST(test_successfullWin);
  RUN_TEST(test_successfuldraw);
  RUN_TEST(test_Emptyboard);
  return UNITY_END();
}
