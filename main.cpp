#include <iostream>
#include "Math.h"

int main() {
    // Testing Add methods
    std::cout << "Add(2, 3) = " << Math::Add(2, 3) << std::endl;
    std::cout << "Add(2, 3, 4) = " << Math::Add(2, 3, 4) << std::endl;
    std::cout << "Add(2.5, 3.5) = " << Math::Add(2.5, 3.5) << std::endl;
    std::cout << "Add(2.5, 3.5, 4.5) = " << Math::Add(2.5, 3.5, 4.5) << std::endl;

    // Testing Mul methods
    std::cout << "Mul(2, 3) = " << Math::Mul(2, 3) << std::endl;
    std::cout << "Mul(2, 3, 4) = " << Math::Mul(2, 3, 4) << std::endl;
    std::cout << "Mul(2.5, 3.5) = " << Math::Mul(2.5, 3.5) << std::endl;
    std::cout << "Mul(2.5, 3.5, 4.5) = " << Math::Mul(2.5, 3.5, 4.5) << std::endl;

    // Testing variadic Add
    std::cout << "Add(5 numbers: 1, 2, 3, 4, 5) = " << Math::Add(5, 1, 2, 3, 4, 5) << std::endl;

    // Testing string concatenation
    const char* str1 = "Hello, ";
    const char* str2 = "World!";
    char* result = Math::Add(str1, str2);

    if (result) {
        std::cout << "String Concatenation: " << result << std::endl;
        free(result); // Free allocated memory
    } else {
        std::cout << "String Concatenation failed (nullptr detected)." << std::endl;
    }

    return 0;
}
