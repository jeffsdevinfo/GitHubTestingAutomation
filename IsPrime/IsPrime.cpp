// IsPrime.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "IsPrime.h"

bool IsPrime(int number) {
    if (number <= 1) return false;
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) return false;
    }
    return true;
}
