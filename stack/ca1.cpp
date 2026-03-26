#include<iostream>
using namespace std;

struct node{
    public:
    int roll;
    string name;
    int marks;
    node* next;
};
class val{
    public:
    int roll;
    string name;
    int marks;
    node* next;

    public:
    val(){
       node *head=NULL; 
    }
    void insert(node *head,int r,string n,int m){
        node* newnode=new node();
        newnode->roll=r;
        newnode->name=n;
        newnode->marks=m;
        head=newnode;

    }
    node* search(node* &head,int m){
        node *temp=head;
        while(temp->next!=NULL){

        
            if(temp->marks==m){
                cout<<temp;
                return 0;
            }
            temp=temp->next;


        }
        return NULL;
    }
    
    void count(node *head){
        node*temp=head;
        int count=0;
        while(temp->next!=NULL){
            count++;
            temp=temp->next;
        }
        cout<< count;
    }
    void disp(node* head){
        node*temp=head;
        while(temp->next!=NULL){
            cout<<temp->roll<<endl;
            cout<<temp->name<<endl;
            cout<<temp->marks<<endl;
        }
        temp=temp->next;
    }
};
int main(){
    node* head=NULL;
    val v;
    v.insert(head,21,"shani",55);
    v.insert(head,21,"shani",55);
    v.insert(head,21,"shani",55);
    v.insert(head,21,"shani",55);
    v.disp(head);

    v.count(head);

    v.search(head,56);

    return 0;

}
    