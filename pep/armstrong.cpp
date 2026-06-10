#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin>>n;

    int original = n;
    int temp = n;
    int count = 0;
    int arm = 0;

    while (temp != 0) {
        count++;
        temp /= 10;
    }

    temp = n;

    while (temp != 0) {
        int digit = temp % 10;
        arm += round(pow(digit, count));
        temp /= 10;
    }

    cout << arm << endl;

    if (arm == original)
        cout << "Armstrong";
    else
        cout << "Not Armstrong";
}