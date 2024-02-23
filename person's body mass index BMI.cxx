#include <iostream>

int main() {
    // Variables to store weight in kilograms and height in meters
    double weight, height;

    // Getting user input for weight and height
    std::cout << "Enter weight in kilograms: ";
    std::cin >> weight;

    std::cout << "Enter height in meters: ";
    std::cin >> height;

    // Calculating BMI
    double bmi = weight / (height * height);

    // Displaying the BMI
    std::cout << "BMI: " << bmi << std::endl;

    // Checking BMI range and displaying corresponding message
    if (bmi >= 18.5 && bmi <= 25) {
        std::cout << "Optimal weight. Keep it up!" << std::endl;
    } else if (bmi < 18.5) {
        std::cout << "Underweight. Consider consulting a nutritionist:  \nPlease the doctor immediately." << std::endl;
    } else {
        std::cout << "Overweight. Consider adopting a healthier lifestyle." << std::endl;
    }

    return 0;
}