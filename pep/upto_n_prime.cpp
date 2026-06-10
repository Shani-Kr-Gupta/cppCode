#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int num = 1; num <= n; num++) {

        if (num <= 1) {
            cout << num << " : Not Prime" << endl;
            continue;
        }

        bool isPrime = true;

        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << num << " : Prime" << endl;
        else
            cout << num << " : Not Prime" << endl;
    }

    return 0;
}