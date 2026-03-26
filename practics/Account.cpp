// Create a class BankAccount with private member variables: account number and balance.
// Implement member functions to deposit and withdraw money.
#include<iostream>
using namespace std;

class BankAccount{
    int anumber;
    float balance=0.0f;

    public:
    void deposit(int money){
        cout<<(balance=balance+money)<<endl;

    }
    void withdraw(int amount){
        if(amount<balance){
            cout<<(balance-amount)<<endl;
        }else{
            cout<<"insufficient Balance"<<endl;
        }
    }
};
int main(){
    int aNumber,money,amount,balance;
    cout<<"Enter your Account Number"<<endl;
    cin>>aNumber;
    cout<<"Enter Money to Deposit"<<endl;
    cin>>money;
    cout<<"Enter Amount for withdrawal"<<endl;
    cin>>amount;
    BankAccount b;
    cout<<"Account Number"<<aNumber<<endl;
    cout<<"total Money after Deposit"<<endl;
    b.deposit(money);
    cout<<"total Money after withdrawal"<<endl;
    b.withdraw(amount);
    return 0;
}