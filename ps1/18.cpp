#include <iostream>
using namespace std;

int main(){
    int n, d=0, r;
    cout << "enter number: ";
    cin >> n;
    r = n;
    while (r > 0){
        int digit = r % 10;
        d = d * 10 + digit;
        r = r / 10;
    }

    if(n == d){
        cout << "Palindrome";
    }else{
        cout << "Not palindrome";
    }
    
    return 0;
}