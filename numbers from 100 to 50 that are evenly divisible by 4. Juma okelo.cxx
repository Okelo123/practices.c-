#include <iostream>
using namespace std;
int main() {
    for (int i = 100; i >= 50; i--) {
        if (i % 4 == 0) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}