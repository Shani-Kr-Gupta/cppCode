#include <iostream>
using namespace std;

#define MAX 100

class UndoRedo {
    string undoStack[MAX];
    string redoStack[MAX];
    int undoTop = -1;
    int redoTop = -1;

public:

    void performAction(string action) {
        undoStack[++undoTop] = action;
        redoTop = -1; // clear redo stack
        cout << "Performed: " << action << endl;
    }

    void undo() {
        if (undoTop == -1) {
            cout << "Nothing to undo\n";
            return;
        }

        string action = undoStack[undoTop--];
        redoStack[++redoTop] = action;

        cout << "Undo: " << action << endl;
    }

    void redo() {
        if (redoTop == -1) {
            cout << "Nothing to redo\n";
            return;
        }

        string action = redoStack[redoTop--];
        undoStack[++undoTop] = action;

        cout << "Redo: " << action << endl;
    }
};

int main() {
    UndoRedo ur;

    ur.performAction("Type A");
    ur.performAction("Type B");

    ur.undo();
    ur.redo();

    return 0;
}
#include <iostream>
using namespace std;

struct Node {
    string data;
    Node* next;
};

class Stack {
    Node* top = NULL;

public:

    void push(string val) {
        Node* temp = new Node;
        temp->data = val;
        temp->next = top;
        top = temp;
    }

    string pop() {
        if (top == NULL)
            return "";

        Node* temp = top;
        string val = temp->data;
        top = top->next;
        delete temp;
        return val;
    }

    bool isEmpty() {
        return top == NULL;
    }
};

// class UndoRedo {
//     Stack undoStack, redoStack;

// public:

//     void performAction(string action) {
//         undoStack.push(action);
//         redoStack = Stack(); // clear redo
//         cout << "Performed: " << action << endl;
//     }

//     void undo() {
//         if (undoStack.isEmpty()) {
//             cout << "Nothing to undo\n";
//             return;
//         }

//         string action = undoStack.pop();
//         redoStack.push(action);

//         cout << "Undo: " << action << endl;
//     }

//     void redo() {
//         if (redoStack.isEmpty()) {
//             cout << "Nothing to redo\n";
//             return;
//         }

//         string action = redoStack.pop();
//         undoStack.push(action);

//         cout << "Redo: " << action << endl;
//     }
// };

// int main() {
//     UndoRedo ur;

//     ur.performAction("Draw Circle");
//     ur.performAction("Draw Square");

//     ur.undo();
//     ur.redo();

//     return 0;
// 
