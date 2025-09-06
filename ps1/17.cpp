#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of terms required: ";
    cin >> n;
    int a=0, b=1;
    cout << a << endl << b << endl;

    for (int i=1; i<=n; i++){
        int c = a+b;
        cout << c << endl;
        a=b;
        b=c;
    }
    return 0;
}