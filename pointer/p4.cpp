#include <iostream>
using namespace std;

class Student {
    string name;
    int *marks;   // pointer as class member

public:
    // Function to set values
    void setData(string n, int m) {
        name = n;
        marks = new int;   // allocate memory
        *marks = m;
    }

    // Function to display values
    void display() {
        cout << "Student: " << name << ", Marks: " << *marks << endl;
    }

    // Function to free memory
    // void freeMemory() {
    //     delete marks;
    //     cout << "Memory freed for " << name << endl;
    // }
};

int main() {
    Student s1, s2;

    s1.setData("Rahul", 85);
    s2.setData("Priya", 92);

    s1.display();
    s2.display();

    // manually free memory (since no destructor used)
    // s1.freeMemory();
    // s2.freeMemory();

    return 0;
}
