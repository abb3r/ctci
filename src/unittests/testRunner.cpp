#include <gtest/gtest.h>
#include "Chapter1Tests.cpp"

int main(int argc , char ** argv)
{
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}