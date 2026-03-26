#include <iostream>
using namespace std;

// Function to find GCD (for simplifying fraction)
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main() {
    int num1, den1, num2, den2;

    // Input two fractions
    cout << "Enter numerator and denominator of first fraction: ";
    cin >> num1 >> den1;

    cout << "Enter numerator and denominator of second fraction: ";
    cin >> num2 >> den2;

    // Calculate LCM of denominators
    int lcm = (den1 * den2) / gcd(den1, den2);

    // Adjust numerators
    int resultNum = (num1 * (lcm / den1)) + (num2 * (lcm / den2));
    int resultDen = lcm;

    // Simplify the result
    int common = gcd(resultNum, resultDen);
    resultNum /= common;
    resultDen /= common;

    cout << "Sum of fractions = " << resultNum << "/" << resultDen << endl;

    return 0;
}