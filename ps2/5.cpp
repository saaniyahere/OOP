#include <iostream>

using namespace std;

int main() {
    int n, f=1;
    cout << "Enter a number: ";
    cin >>n;

    int i=1;
    while (i<=n) {
        f*=i;
        i++;
    }

    cout << "fatorial of "<< n<< " is "<<f<<endl;
    return 0;
}