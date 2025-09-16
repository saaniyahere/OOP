#include<iostream>
#include<string>
using namespace std;

class BankAccount{
    int AccNo, bal;
    public:
    BankAccount(){
        AccNo = 0;
        bal = 0;
    }
    BankAccount(int n){
        AccNo = n;
        bal = 0;
    }
    BankAccount(int n, int b){
        AccNo = n;
        bal = b;
    }
    void display(){
        cout<<endl<<"Bank Account Details: "<<endl;
        cout<<"Account Number: "<<AccNo<<endl;
        cout<<"Balance: Rs."<<bal<<endl;
    }   
};

int main(){
    BankAccount b1;
    b1.display();
    BankAccount b2(201);
    b2.display();
    BankAccount b3(324,40000);
    b3.display();
    return 0;
}