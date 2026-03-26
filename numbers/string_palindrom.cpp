#include <iostream>
#include <string>
using namespace std;
bool checkIfPalindrome(string s) {
    int left = 0;
    int right = s.size() - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            return false;  // Not a palindrome
        }
        left++;
        right--;
    }
    return true; // Palindrome
}
int main() {
    string str;   

    cout << "Enter the String: ";
    getline(cin, str);  

    if (checkIfPalindrome(str)) {
        cout << "The entered string is a Palindrome." << endl;
    } else {
        cout << "The entered string is NOT a Palindrome." << endl;
    }

    return 0;
}
