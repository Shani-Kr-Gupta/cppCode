#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node *root;


class BST{
    public:
    int data;
    Node* left;
    Node* right;
    Node *root;

    void insert(int key){
        if(root==NULL){
            cout<<"BST is empty"<<endl;
        }
        else if(left->data > root){
            right->key=left->data;
        }
        else if(right->key<root){
            left=right->key;

        }

    }
    void inorder(){
        if(root==NULL){
            return;
        }
        left=left->data;
        root=root->data;
        right=right->data;
    }

}
};
int main(){
    Node b;
    cout<<"insert in progress"<<endl;
    b.insert(10);
    b.insert(50);
    b.insert(20);
    b.insert(90);
    cout<<" display after inorder"<<endl;
    b.inorder();

}