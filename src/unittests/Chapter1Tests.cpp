#include <gtest/gtest.h>
#include <vector>
#include "tasks/Chapter1.hpp"

TEST(Chap1_StrinManTests, Task1_uniqueCharsTest) {

  std::vector<std::string> list = {"abber", "tahir","" ,"cba", "cdab"};
  ASSERT_EQ(ctci::Chapter1::getInstance().checkForUniqueChars(list[0]),false);
  ASSERT_EQ(ctci::Chapter1::getInstance().checkForUniqueChars(list[1]),true);
  ASSERT_EQ(ctci::Chapter1::getInstance().checkForUniqueChars(list[2]),true);
  ASSERT_EQ(ctci::Chapter1::getInstance().checkForUniqueChars(list[3]),true);
  ASSERT_EQ(ctci::Chapter1::getInstance().checkForUniqueChars(list[4]),true);
}

TEST(Chap1_StrinManTests, Task2_checkPermutationTest) {

  std::vector<std::string> list = {"abber", "tahir","" ,"cba", "cdab"};
  ASSERT_EQ(ctci::Chapter1::getInstance().checkPermutationOf(const_cast<char *>(list[0].c_str()), 
                                    const_cast<char *>(list[1].c_str())),false);
  ASSERT_EQ(ctci::Chapter1::getInstance().checkPermutationOf(const_cast<char *>(list[1].c_str()),
                                    const_cast<char *>(list[2].c_str())),false);
  ASSERT_EQ(ctci::Chapter1::getInstance().checkPermutationOf(const_cast<char *>(list[2].c_str()),
                                    const_cast<char *>(list[3].c_str())),false);
  ASSERT_EQ(ctci::Chapter1::getInstance().checkPermutationOf(const_cast<char *>(list[3].c_str()),
                                    const_cast<char *>(list[4].c_str())),true);
}

TEST(Chap1_StrinManTests, Task3_replaceSpacesInStringTest) {
  std::vector<std::string> list = {"hello world", "abber tahir","" ,"i like to code ", " I "};
  ASSERT_EQ(ctci::Chapter1::getInstance().replaceCharInString(list[0], ' ', "%20"),"hello%20world" );
  ASSERT_EQ(ctci::Chapter1::getInstance().replaceCharInString(list[1], ' ', "%20"),"abber%20tahir" );
  ASSERT_EQ(ctci::Chapter1::getInstance().replaceCharInString(list[2], ' ', "%20"),"" );
  ASSERT_EQ(ctci::Chapter1::getInstance().replaceCharInString(list[3], ' ', "%20"),"i%20like%20to%20code%20" );
  ASSERT_EQ(ctci::Chapter1::getInstance().replaceCharInString(list[4], ' ', "%20"),"%20I%20" );
}