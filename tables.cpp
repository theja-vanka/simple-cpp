#include<iostream>

int tables(int n) {
    for (int i = 1; i <= 10; ++i) {
        std::cout << n << " x " << i << " = " << n * i << std::endl;
    }
    return 0;
}

int main() {
    int number;
    std::cout << "Enter a number to print its multiplication table: ";
    std::cin >> number;

    tables(number);

    return 0;
}
