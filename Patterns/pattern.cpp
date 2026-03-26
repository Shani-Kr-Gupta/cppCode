#include<iostream>
using namespace std;                                    
void Pattern1(int n){
    for(int i=0;i<n;i++){    //outer loop for rows
        for(int j=0;j<n;j++){   //Inner loop for column
            cout<<"*";
        }
        cout<<endl;
    }
}
//Pattern2
void Pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

//Pattern3
void Pattern3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

//Pattern4

void Pattern4(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++)
        {
           cout<<i<<" ";

        }
        cout<<endl;
        
    }
}
//Pattern5
void Pattern5(int n){
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}

//pattern 7
/* 
     *    
    ***
   *****
  *******
*/
 void Pattern7(int n){
    //this is the outer loop which will loop for the rows
    for(int i=0;i<n;i++){
        //for printing the spaces before stars in each row
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //for printing the stars in each rows
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        //for printing the spaces after the stars in each row
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void Pattern8(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++){
            cout<<" ";

        }
        for(int k=2*n-i-1;k>0;k--){
            cout<<"*";
        }
        cout<<endl;
    }
}
    
 

int main(){
    int n;
    cin>>n;
    cout<<"Pattern is"<<endl;
    //Pattern1(n);
    // Pattern2(n);
    // Pattern3(n);
    // Pattern4(n);
    //Pattern5(n);
    // Pattern7(n);
    Pattern8(n);
    return 0;

}
