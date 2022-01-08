#include <gtest/gtest.h>
#include <vector>
#include "../1_2.cpp"
TEST(StrinManTests, testCheckPermutation) {

  std::vector<std::string> list = {"abber", "tahir","" ,"cba", "cdab"};
  ASSERT_EQ(checkPermutationOf(const_cast<char *>(list[0].c_str()), 
                                    const_cast<char *>(list[1].c_str())),false);
  ASSERT_EQ(checkPermutationOf(const_cast<char *>(list[1].c_str()),
                                    const_cast<char *>(list[2].c_str())),false);
  ASSERT_EQ(checkPermutationOf(const_cast<char *>(list[2].c_str()),
                                    const_cast<char *>(list[3].c_str())),false);
  ASSERT_EQ(checkPermutationOf(const_cast<char *>(list[3].c_str()),
                                    const_cast<char *>(list[4].c_str())),true);
}