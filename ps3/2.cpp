#include <iostream>
#include <string>

using namespace std;

class BankAcc{
    private:
    string name;
    float balance;

    public:
    void set_value(string n, float b){
        name = n;
        balance = b;
    }
    void get_value(void){
        cout << "Name: " << name << "\nCurrent Balance: " << balance << endl;
    }

};

int main(){
    BankAcc b1;
    b1.set_value("Arun", 23);
    b1.get_value();
    return 0;
}