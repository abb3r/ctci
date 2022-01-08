#include <gtest/gtest.h>
#include <vector>
#include "../1_1.cpp"

TEST(StrinManTests, testUniqueChars) {

  std::vector<std::string> list = {"abber", "tahir","" ,"cba", "cdab"};
  ASSERT_EQ(checkForUniqueChars(list[0]),false);
  ASSERT_EQ(checkForUniqueChars(list[1]),true);
  ASSERT_EQ(checkForUniqueChars(list[2]),true);
  ASSERT_EQ(checkForUniqueChars(list[3]),true);
  ASSERT_EQ(checkForUniqueChars(list[4]),true);
}