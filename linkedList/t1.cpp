#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;

};
void addAtStart(node* &head,int value){
    node* newNode=new node();
    newNode->data=value;
    newNode->next=head;
    head=newNode;
}
void addAtEnd(node* &head,int value){
    node* newNode=new node();
    newNode->data=value;
    newNode->next=NULL;

    if(head==NULL){
        head=newNode;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
node* search(node* head,int value){
    node*temp=head;
    while(temp!=NULL){
        if(temp->data==value){
            return temp;
        }
        temp=temp->next;
    }
    return NULL;
}
void delValue(node* head,int value){
    if(head==NULL){
        cout<<"List is Empty\n";
        return;
    }
    if(head->data==value){
        node *temp=head;
        head=head->next;
        delete temp;
        return;
    }
    node* current=head;
    while(current->next!=NULL && current->next->data!=value){
        current=current->next;
        if(current->next==NULL){
            cout<<"value not found\n";
            return;
        }
        node* temp=current->next;
        current->next=temp->next;
        delete temp;
        return;
    }
    

}
int main() {
    node* head = NULL;

    // Adding elements at the start
    addAtStart(head, 10);
    addAtStart(head, 20);
    addAtStart(head, 30);

    // Adding elements at the end
    addAtEnd(head, 40);
    addAtEnd(head, 50);
    delValue(head,10);

    // Printing the linked list
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
    cout<<endl;

    cout<<search(head,300);


    return 0;
}