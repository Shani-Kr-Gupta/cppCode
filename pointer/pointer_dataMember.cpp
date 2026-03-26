#include <iostream>
using namespace std;
class Student {
public:
    int marks;
    string name;
};
int main() {
    // Pointer-to-data-members
    int Student::*ptrMarks = &Student::marks;
    string Student::*ptrName = &Student::name;
    Student s1, s2;
    // Taking input for first student
    cout << "Enter name of student 1: ";
    getline(cin, s1.*ptrName); // access name using pointer-to-member
    cout << "Enter marks of student 1: ";
    cin >> s1.*ptrMarks;
    cin.ignore(); // clear buffer
    // Taking input for second student
    cout << "Enter name of student 2: ";
    getline(cin, s2.*ptrName);
    cout << "Enter marks of student 2: ";
    cin >> s2.*ptrMarks;
    // Displaying using pointer-to-data-member
    cout << "\n--- Student Details ---\n";
    cout << "Name: " << s1.*ptrName << ", Marks: " << s1.*ptrMarks << endl;
    cout << "Name: " << s2.*ptrName << ", Marks: " << s2.*ptrMarks << endl;
    return 0;
}
