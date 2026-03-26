#include<iostream>
using namespace std;

#define SIZE 5

class Stack {
    int arr[SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int value) {
        if (top == SIZE - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = value;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }
        cout << "Popped: " << arr[top--] << endl;
    }

    void peek() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Top element: " << arr[top] << endl;
    }
};
int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.peek();   // Should show 30

    s.pop();    // Removes 30
    s.peek();   // Should show 20

    s.push(40);
    s.push(50);
    s.push(60); // This may cause overflow if SIZE = 5
    s.peek();

    // s.pop();
    // s.pop();
    // s.pop();
    // s.pop();
    // s.pop();    // This may cause underflow

    return 0;
}