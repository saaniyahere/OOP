#include<iostream>
using namespace std;

int main(){
    char a[4];
    cout<< "Enter a four digit number: ";
    cin >> a;
    for(int i=3;i>=0;i--){
        cout<<a[i];
    }
    return 0;
}