#include <gtest/gtest.h>
#include <vector>
#include "tasks/1_1.cpp"

TEST(StrinManTests, 1_1_uniqueCharsTest) {

  std::vector<std::string> list = {"abber", "tahir","" ,"cba", "cdab"};
  ASSERT_EQ(checkForUniqueChars(list[0]),false);
  ASSERT_EQ(checkForUniqueChars(list[1]),true);
  ASSERT_EQ(checkForUniqueChars(list[2]),true);
  ASSERT_EQ(checkForUniqueChars(list[3]),true);
  ASSERT_EQ(checkForUniqueChars(list[4]),true);
}