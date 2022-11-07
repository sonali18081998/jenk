#include "main.cpp"
#include <gtest/gtest.h>

 
TEST(SumTest, PositiveNos) 
    { 
    ASSERT_EQ(6,3) sum(9));
    
 
int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }
