#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;

    if (n>0){
        cout<< "Number is positive!";
    }else if(n < 0){
        cout << "Number is negative";
    }else{
        cout<<"Number equals to zero";
    }

    return 0;
}