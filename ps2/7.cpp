#include <iostream>
using namespace std;

int main() {
    int n, a = 0;
    cout <<"Enter a number: ";
    cin >>n;

    if (n<= 1) {
        cout <<n <<" is not a prime number." << endl;
        return 0;
    }

    for (int i=2; i<=n/2; i++) {
        if (n%i==0) {
            a=1;
            break;
        }
    }

    if (a==0)
        cout <<"Prime" <<endl;
    else
        cout <<"Not prime" <<endl;

    return 0;
}