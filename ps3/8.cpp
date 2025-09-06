#include<iostream>
#include<string>

using namespace std;

class Account{
    private:
    int an;
    int b;

    public:
    void set_values(int number, int balance){
        an = number ;
        b = balance;
    }

    void get_values(void){
        cout << "------Account Details------" << endl;
        cout << "Account number: " << an << endl;
        cout << "Balance: " << b << endl;
    }

};

int main(){
    Account a1;

    a1.set_values(20001,12345);
    a1.get_values();

    return 0;
}