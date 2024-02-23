#include <iostream>
#include <string>

class Student {
public:
    // Constructor with default values
    Student(std::string admissionNumber = "", float accountBalance = 0.0, std::string courseDone = "") {
        this->admissionNumber = admissionNumber;
        this->accountBalance = accountBalance;
        this->courseDone = courseDone;
    }

    // Display method
    void display() {
        std::cout << "Admission Number: " << admissionNumber << std::endl;
        std::cout << "Account Balance: " << accountBalance << std::endl;
        std::cout << "Course Done: " << courseDone << std::endl;
    }

private:
    std::string admissionNumber;
    float accountBalance;
    std::string courseDone;
};

int main() {
    // Create an object using default constructor values
    Student student1;

    // Display the object's data
    student1.display();

    // Create another object with specific values
    Student student2("12345", 1000.0, "Computer Science");

    // Display the second object's data
    student2.display();

    return 0;
}
