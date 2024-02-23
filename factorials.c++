#include<iostream>
using namespace std;

int fact(int);

int main() {
    int num, f;

    cout << "Enter number:\n";
    cin >> num;

    f = fact(num);

    cout << "\nThe factorial of " << num << " is " << f << endl;

    return 0;
}

int fact(int n) {
    if (n > 1)
        return n * fact(n - 1);
    else
        return 1;
}
 