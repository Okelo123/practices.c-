#include <iostream>
using namespace std;

float calculateNetPay(float hoursWorked, float hourlyRate, float taxRate) {
    float grossPay = hoursWorked * hourlyRate;
    float taxAmount = grossPay * taxRate;
    float netPay = grossPay - taxAmount;
    return netPay;
}

int main() {
    float hoursWorked = 40;
    float hourlyRate = 5;
    float taxRate = 0.20;

    float netPay = calculateNetPay(hoursWorked, hourlyRate, taxRate);
    cout << "Tax deduction: $" << netPay << endl;
     cout << "Gross pay: $" << netPay << endl;
      cout << "Net pay: $" << netPay << endl;



    return 0;
}

