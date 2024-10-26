// main.cpp
#include <iostream>
#include "IsPrime.h"

int main() {
    int num = 17;
    std::cout << "Is " << num << " prime? " << (IsPrime(num) ? "Yes" : "No") << std::endl;
    return 0;
}