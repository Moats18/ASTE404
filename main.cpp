#include "gtest/gtest.h"
#include "vec.h"

/**
 * @brief Test case for dot product of two vectors.
 * 
 * This test checks if the dot product of two specific vectors is calculated correctly.
 * It computes the dot product of vectors `a` and `b`, and expects the result to be 2.
 * 
 * @return void
 */
TEST(VecTest, VecDot) {
    // Define vector a and b
    double3 a{0, 1, 2};  ///< Vector a (0, 1, 2)
    double3 b{0, 0, 1};  ///< Vector b (0, 0, 1)

    // Test the dot product
    EXPECT_EQ(dot(a, b), 2);  ///< The dot product should be 2 (0*0 + 1*0 + 2*1).
}

/**
 * @brief Main function to run the tests.
 * 
 * This function initializes the GoogleTest framework and runs all the test cases.
 * It is the entry point of the test program.
 * 
 * @param argc The number of arguments passed to the program.
 * @param argv The array of arguments passed to the program.
 * 
 * @return Returns the result of running all tests. A value of 0 indicates success.
 */
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv); ///< Initializes the GoogleTest framework.
    return RUN_ALL_TESTS();  ///< Runs all the tests and returns the result.
}
