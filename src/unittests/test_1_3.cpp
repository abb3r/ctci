#include <gtest/gtest.h>
#include <vector>
#include "tasks/1_3.cpp"
TEST(StrinManTests, 1_3_replaceSpacesInStringTest) {
  std::vector<std::string> list = {"hello world", "abber tahir","" ,"i like to code ", " I "};
  ASSERT_EQ(replaceCharInString(list[0], ' ', "%20"),"hello%20world" );
  ASSERT_EQ(replaceCharInString(list[1], ' ', "%20"),"abber%20tahir" );
  ASSERT_EQ(replaceCharInString(list[2], ' ', "%20"),"" );
  ASSERT_EQ(replaceCharInString(list[3], ' ', "%20"),"i%20like%20to%20code%20" );
  ASSERT_EQ(replaceCharInString(list[4], ' ', "%20"),"%20I%20" );
}