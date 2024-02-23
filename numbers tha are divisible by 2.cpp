#include <iostream>

int main() {
    int start = 100;
    int end = 200;
    int sum = 0;

    std::cout << "Even numbers from " << start << " to " << end << " are:\n";

    for (int i = start; i <= end; i += 2) {
        std::cout << i << " ";
        sum += i;
    }

    std::cout << "\n\nSum of even numbers: " << sum << std::endl;

    return 0;
}
