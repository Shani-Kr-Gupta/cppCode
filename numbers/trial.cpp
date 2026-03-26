#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number;
    cout << "Enter the Number : ";
    cin >> number;

    int digits = 0;
    int temp = number;
    if (temp == 0) {
        digits = 1;
    } else {
        while (temp != 0) {
            digits++;
            temp /= 10;
        }
    }

    temp = number;
    int result = 0;

    while (temp != 0) {
        int lastDigit = temp % 10;
        result += round(pow(lastDigit, digits));
        temp /= 10;
    }

    if (result == number) {
        cout << number << " is an Armstrong Number" << endl;
    } else {
        cout << number << " is NOT an Armstrong Number" << endl;
    }

    return 0;
}


//153=1+125+27=153
