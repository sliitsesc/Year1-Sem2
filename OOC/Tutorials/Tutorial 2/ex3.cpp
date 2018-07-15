#include <iostream>
using namespace std;

int main() {
    int num;
    long fac;

    cout << "Enter a number : ";
    cin >> num;

    fac = 1;
    for (int i = num; i >= 1; i--) {
        fac = fac * i;
    }

    cout << "Factorial of " << num << " is " << fac;

    return 0;
}
