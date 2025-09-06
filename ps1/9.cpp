#include <iostream>
using namespace std;

int main(){
    int n,f;
    cout << "Enter number: ";
    cin >> n;
    for (int i=n;i>0;i--){
        f *= i;
    }
    cout <<"Factorial = " << f;
    
    return 0;
}