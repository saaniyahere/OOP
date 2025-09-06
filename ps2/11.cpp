#include <iostream>
using namespace std;

int main() {
    int a, b;
    int result= 1; 

    cout <<"Enter base (a): ";
    cin>> a;
    cout <<"Enter exponent (b): ";
    cin >> b;

    int i=1;
    while (i<=b) {
        result*=a;
        i++;
    }

    cout << a<< "^"<< b <<" = " << result <<endl;

    return 0;
}
