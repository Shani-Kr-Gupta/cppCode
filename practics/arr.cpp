#include<iostream>
using namespace std;
class operation{
    public:
    int n;
    
    void insertAtPos(int arr[],int &n,int pos,int value);
    void delAtPos(int arr[],int &n,int pos);


};
        // insert at  element at position
void operation::insertAtPos(int arr[] ,int &n,int pos,int value){
    for(int j=n-1;j>=pos;j--){
            
        arr[j+1]=arr[j];

    }
    arr[pos]=value;
    n=n+1;
}
        //del at Position
void operation:: delAtPos(int arr[],int &n,int pos){
    for(int l=pos;l<n-1;l++){
        arr[l]=arr[l+1];
    }
    n=n-1;
}

int main(){
    int n;
    cout<<"Enter the Number of Element :";
    cin>>n;
    int target,pos,value;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the array element : "<<endl;
        cin>>arr[i];
    }
    operation o;
    cout<<"Enter the position : "<<endl;
    cin>>pos;
    //cout<<"Enter the value you want to insert at Position :";
    //cin>>value;
    //o.insertAtPos(arr,n,pos,value);
    o.delAtPos(arr,n,pos);

    // cout<<"Enter the Target: "<<endl;
    // cin>>target;
    

 
//traverse
    for(int k=0;k<n;k++){
        cout<<" "<<arr[k]<<" "<<endl;
    }


    
    return 0;

}


