#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter num: ";
    cin >> n;

    for(int i=1;i<=10;i++){
        cout<< "\n" << n << " x " << i << " = " <<n*i;
    }

    return 0;
}