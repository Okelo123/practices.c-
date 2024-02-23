#include <iostream>

int main() {
    // Declare variables to store two integers
    int num1, num2;

    // Input the first integer
    std::cout << "Enter the first integer: ";
    std::cin >> num1;

    // Input the second integer
    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    // Determine the largest number
    int largestNumber = (num1 > num2) ? num1 : num2;

    // Display the result
    std::cout << "The largest number is: " << largestNumber << std::endl;

    return 0;
}
