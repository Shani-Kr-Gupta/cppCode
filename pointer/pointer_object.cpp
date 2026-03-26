#include <iostream>
using namespace std;
class Student {
    string name;
    int marks;
public:
    void setData(string n, int m) {
        name = n;
        marks = m;
    }
    void display() {
        cout << "Student: " << name << ", Marks: " << marks << endl;
    }
};
int main() {
    string n;
    int marks;
    cout<<"Enter your name ";
    getline(cin,n);
    cout<<"enter Marks "<<endl;
    cin>>marks;

    Student obj;        // normal object
    Student *ptr;       // pointer to object
    ptr = &obj;         // pointer pointing to object
    // Access object members using pointer
    ptr->setData(n, marks);
    ptr->display();
    return 0;
}
