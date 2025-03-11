#include "Math.h"
#include <cstdarg>  // For variadic function
#include <cstring>  // For strlen, strcpy, strcat
#include <cstdlib>  // For malloc

// Overloaded Add methods
int Math::Add(int a, int b) {
    return a + b;
}

int Math::Add(int a, int b, int c) {
    return a + b + c;
}

int Math::Add(double a, double b) {
    return static_cast<int>(a + b);
}

int Math::Add(double a, double b, double c) {
    return static_cast<int>(a + b + c);
}

// Overloaded Mul methods
int Math::Mul(int a, int b) {
    return a * b;
}

int Math::Mul(int a, int b, int c) {
    return a * b * c;
}

int Math::Mul(double a, double b) {
    return static_cast<int>(a * b);
}

int Math::Mul(double a, double b, double c) {
    return static_cast<int>(a * b * c);
}

// Variadic function for summing multiple integers
int Math::Add(int count, ...) {
    va_list args;
    va_start(args, count);
    int sum = 0;

    for (int i = 0; i < count; ++i) {
        sum += va_arg(args, int);
    }

    va_end(args);
    return sum;
}

// String concatenation function
char* Math::Add(const char* str1, const char* str2) {
    if (!str1 || !str2) {
        return nullptr; // If either string is null, return nullptr
    }

    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
    char* result = (char*)malloc(len1 + len2 + 1); // Allocate memory

    if (result) {
        strcpy(result, str1);
        strcat(result, str2);
    }

    return result;
}
