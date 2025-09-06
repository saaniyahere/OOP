#include <iostream>

using namespace std;

int main(){
    int n, largest = 0;
    cout <<"enter a number: ";
    cin >>n;

    do{
        int digit= n%10;
        if(digit >largest)
            largest= digit;
        n /= 10;
    }while (n!=0);

    cout <<"largest digit is: " << largest << endl;
    return 0;
}