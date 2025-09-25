#include<iostream>

int factorial(int n) {
    if (n < 0) {
        throw std::invalid_argument("Negative input not allowed");
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int number;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> number;

    try {
        int result = factorial(number);
        std::cout << "Factorial of " << number << " is " << result << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}