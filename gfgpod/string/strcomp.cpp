#include<iostream>
using namespace std;

int main(){
    string s1="shani";
    string s2="shani";
    s2="sunny";
    bool s=s1==s2;
    cout<<s;

    return 0;

}
//string pool

/*String Pool in C++

A String Pool is a memory optimization technique where identical string literals are stored only once in memory. When the same string literal appears multiple times in a program, the compiler can make all references point to the same memory location instead of creating separate copies.*/

