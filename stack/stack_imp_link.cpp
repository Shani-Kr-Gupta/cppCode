#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

class Stack {
    node* top;

public:
    Stack() {
        top = NULL;
    }

    void push(int value) {
        node* newNode = new node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if (top == NULL) {
            cout << "Stack Underflow\n";
            return;
        }
        node* temp = top;
        cout << "Popped: " << temp->data << endl;
        top = top->next;
        delete temp;
    }

    void peek() {
        if (top == NULL) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Top element: " << top->data << endl;
    }
    void display() {
    if (top == NULL) {
        cout << "Stack is empty\n";
        return;
    }

    node* temp = top;

    cout << "Stack elements (top to bottom):\n";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
};
int main() {
    Stack s;

    // Pushing elements
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    // Display stack
    s.display();

    // Peek top element
    s.peek();

    // Pop one element
    s.pop();

    // Display again after pop
    s.display();

    return 0;
}