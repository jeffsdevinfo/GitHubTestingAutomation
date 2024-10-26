#include "pch.h"
#include "gtest/gtest.h"
#include "prime_checker.h"  // Import the function directly, though for larger projects, you'd split it to headers

TEST(IsPrimeTest, HandlesPrimeNumbers) {
    EXPECT_TRUE(isPrime(2));
    EXPECT_TRUE(isPrime(3));
    EXPECT_TRUE(isPrime(17));
    EXPECT_TRUE(isPrime(19));
}

TEST(IsPrimeTest, HandlesNonPrimeNumbers) {
    EXPECT_FALSE(isPrime(1));
    EXPECT_FALSE(isPrime(4));
    EXPECT_FALSE(isPrime(18));
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}