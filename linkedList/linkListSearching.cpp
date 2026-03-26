#include <iostream>
using namespace std;

   /* ---------- Node Structure ---------- */

struct Node {
    int data;
    Node* next;
};

   /* ---------- Add at Start ---------- */    

void addAtStart(Node* &head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

  /* ---------- Add at End ---------- */
  

void addAtEnd(Node* &head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}
Node* search(Node* head, int value) {
    Node* temp = head;

    while (temp != NULL) {
        if (temp->data == value)
            return temp;
        temp = temp->next;
    }

    return NULL;
}

/* ---------- Traverse ---------- */

void traverse(Node* head) {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}


void menu() {
    cout << "\n----- MENU -----\n";
    cout << "1. Add at Start\n";
    cout << "2. Add at End\n";
    cout << "3. Search\n";
    cout << "4. Traverse\n";
    cout << "5. Exiting the program \n";
    cout << "Enter choice: ";
}

int main()
{
    Node* head = NULL;
    int choice, value, position;

    do {
        menu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                addAtStart(head, value);
                break;

            case 2:
                cout << "Enter value: ";
                cin >> value;
                addAtEnd(head, value);
                break;
            case 3: {
                cout << "Enter value to search: ";
                cin >> value;
                Node* result = search(head, value);
                if (result != NULL)
                    cout << "Value found: " << result->data << endl;
                else
                    cout << "Value not found\n";
                break;
                }
            case 4:
                traverse(head);
                break;

            case 5:
                cout << "Exiting program\n";
                break;

            default:
                cout << "Invalid choice\n";
        } 
    }while (choice != 0);

    return 0;

}
