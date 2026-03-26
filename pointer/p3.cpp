// /*When a pointer is created, it just contains a random address that may or may not be valid. This type of pointer is called wild pointer.*/

// #include <iostream>
// using namespace std;

// int main() {

//     // Wild pointer
//     int *ptr;
//     return 0;
// }

// /*A NULL pointer is a pointer that does not point to any valid memory location but NULL. It is often used to initialize a pointer when you do not want it to point to any object.*/

// #include <iostream>
// using namespace std;

// int main() {
    
//     // NULL pointer
//     int *ptr = NULL;
    
//     return 0;
// }

// // A void pointer (void*) is a special type of pointer in C++ that has no associated data type. It can hold the address of any data type, making it useful for generic programming. However, since the type is unknown, the compiler doesn't know how many bytes to read or how to interpret the data. Therefore, a void pointer cannot be directly dereferenced. It must first be explicitly typecast to the appropriate pointer type.

// #include <iostream>
// using namespace std;

// int main() {
//     int x = 42;
    
//     // void pointer holding address of an int
//     void* ptr = &x; 

//     // Error: cannot dereference void pointer
//     // cout << *ptr; 

//     // Typecast before dereferencing
//     cout << "Value pointed by void pointer: " << *(static_cast<int*>(ptr)) << endl;

//     return 0;
// }
// //pointer to pointer

#include <iostream>
using namespace std;

int main() {
    int var = 10;
    
    // Store the address of 
    // var variable
    int* ptr1 = &var;
    int** ptr2 = &ptr1;
    
    // Access values using (*)
    // operator
    cout << *ptr1 << endl;
    cout << **ptr2;
    return 0;
}