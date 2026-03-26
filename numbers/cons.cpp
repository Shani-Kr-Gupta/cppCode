#include <iostream>
using namespace std;

class A {
    public:
    int a, b;

public:
    A() {
        cout << "Default Constructor Called\n";
    }
    A(int x, int y) {
    
        cout << "Parameterized Constructor Called\n";
    }
    A(const A &obj) {
        a = obj.a;
        b = obj.b;
        cout << "Copy Constructor Called\n";
    }

   
    int add(int a,int b) {
        return a + b;
    }
    void display(){
        cout<<"Add"<<a+b<<endl;
    }
};
int main(){
    int c,d;
    cin>>c>>d;
    A x;
    x.add(c,d);
    return 0;
}

