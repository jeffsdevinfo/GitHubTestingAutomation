#include "pch.h"
#include "IsPrime.h"

TEST(IsPrimeTest, HandlesPrimeNumbers) {
    EXPECT_TRUE(IsPrime(2));
    EXPECT_TRUE(IsPrime(3));
    EXPECT_TRUE(IsPrime(17));
    EXPECT_TRUE(IsPrime(19));
}

TEST(IsPrimeTest, HandlesNonPrimeNumbers) {
    EXPECT_FALSE(IsPrime(1));
    EXPECT_FALSE(IsPrime(4));
    EXPECT_FALSE(IsPrime(18));
}