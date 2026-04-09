#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class BST {
public:
    Node* root;

    BST() {
        root = NULL;
    }

    Node* insert(Node* root, int key) {
        if (root == NULL) {
            return new Node(key);
        }
        if (key < root->data) {
            root->left = insert(root->left, key);
        } else {
            root->right = insert(root->right, key);
        }
        return root;
    }

    void insert(int key) {
        root = insert(root, key);
    }

    void inorder(Node* root) {
        if (root == NULL) return;
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }

    void inorder() {
        inorder(root);
    }
};

int main() {
    BST b;
    cout << "insert in progress" << endl;
    b.insert(10);
    b.insert(50);
    b.insert(20);
    b.insert(90);
    cout << "display after inorder" << endl;
    b.inorder();
}