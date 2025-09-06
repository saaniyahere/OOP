#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout << "Enter first number: ";
    cin >>a;
    cout << "Enter second number: ";
    cin >>b;
    cout << "Enter third number: ";
    cin >> c;

    int l=a;
    if (b>l){
        l = b;
    }if(c>l){
        l = c;
    }

    cout << "Largest number is " << l;

    return 0;
}