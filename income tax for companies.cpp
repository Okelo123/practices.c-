#include <iostream>
#include <vector>

using namespace std;

struct Employee {
    double grossIncome;
    double standardDeduction;
    double personalExemption;
    double taxRate;
};

double calculateNetIncome(Employee emp) {
    return emp.grossIncome - emp.standardDeduction - emp.personalExemption;
}

double calculateTax(Employee emp) {
    double netIncome = calculateNetIncome(emp);
    return netIncome * emp.taxRate;
}

int main() {
    int numEmployees;
    cout << "Enter the number of employees: ";
    cin >> numEmployees;

    vector<Employee> employees(numEmployees);

    for (int i = 0; i < numEmployees; ++i) {
        cout << "Enter the gross income for employee " << i + 1 << ": ";
        cin >> employees[i].grossIncome;

        cout << "Enter the standard deduction for employee " << i + 1 << ": ";
        cin >> employees[i].standardDeduction;

        cout << "Enter the personal exemption for employee " << i + 1 << ": ";
        cin >> employees[i].personalExemption;

        employees[i].taxRate = 0.15; // Assuming tax rate is always 15%
    }

    cout << "\nEmployee Payable Income Tax:\n";
    for (int i = 0; i < numEmployees; ++i) {
        double tax = calculateTax(employees[i]);
        cout << "Employee " << i + 1 << ": $" << tax << endl;
    }

    return 0;
}
