#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i=1;

    do{
        cout << n << "x"<< i << "=" << n*i << endl;
        i++;
    }while(i<=10);
       
    
    return 0;
}