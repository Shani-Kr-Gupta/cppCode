#include<iostream>
using namespace std;
class Complex{
    int a,b;

    public:
    void setValues(int n1, int n2){
        a=n1;
        b=n2;
    }
    friend Complex sumComplex(Complex o1, Complex o2);
    void printValues(){
        cout<<"The number is :"<<a<<" + "<<b<<"i"<<endl;
    }

};
Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setValues((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}


int main(){
    Complex c1,c2,sum;
    c1.setValues(1,4);
    c1.printValues();

    c2.setValues(5,8);
    c2.printValues();

    sum=sumComplex(c1,c2);
    sum.printValues();

    return 0;
}
/*Properties of Friend function:
1. Not inthe scope of the class.
2. Since it is not in the scope of the class, it can't be vcalled from the object of that class. c1.sumComplex()==Invalid.
3. Can be invoked without the help of any object.
4. Usually contain the objects as arguments.
5. Can be declared inside public or private section of the class
6.It can't access the member directly by their names and need object_name.member_name to access any member.
*/