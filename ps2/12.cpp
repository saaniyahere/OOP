#include <iostream>
using namespace std;

int main() {
    int i = 1;

    while(i<=50) {
        if(i% 3==0 && i%5==0){
            cout << "fizzBuzz";
        } else if(i%3==0){
            cout << "fizz";
        } else if(i %5 ==0){
            cout << "buzz";
        } else{
            cout << i;
        }
        cout << endl; 
        i++;
    }

    return 0;
}
