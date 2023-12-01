// main.cpp

#include <iostream>
#include "functions.h"

int main() {
    // Get input from the user
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Calculate and display the square using the function from functions.cpp
    int result = square(num);
    std::cout << "The square of " << num << " is: " << result << std::endl;

    return 0;
