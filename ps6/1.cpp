#include<iostream>
using namespace std;

class Bank{
    private:
    int acc_no;
    float balance;
    static int interestRate;

    public:
    Bank(){
        this->acc_no=0;
        this->balance=0;
    }
    Bank(int a, float b){
        this->balance= b;
        this->acc_no = a;
    }
    void deposit(float a){
        this->balance= this->balance+a;
        cout<<"Deposited : "<< a << endl;
        cout<<"New balance : "<< this->balance << endl;
    }
    void withdraw(float a){
        this->balance= this->balance-a;
        cout<<"Withdrawn : "<< a << endl;
        cout<<"New balance : "<< this->balance << endl;
    }
    void applyInterest(int y){
        float interest = interestRate*balance/100;
        this->balance = this->balance + interest;
        cout << "5% interest applied for "<< y << " years"<<endl;
        cout<< "New balance : "<< this->balance << endl;
    }
    void getDetails(){
        cout << "Account number : "<< this->acc_no << endl;
        cout << "Balance : "<< this->balance << endl;
    }

};

int Bank::interestRate = 5;

int main(){
    Bank b1(12345, 1000);
    b1.getDetails();
    b1.deposit(500);
    b1.withdraw(200);
    b1.applyInterest(1);
    return 0;
}
