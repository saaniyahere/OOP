#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
    int n;
    cout <<"Enter number: ";
    cin >> n;
    int isprime;

    if (n<=1){
        cout<< "Not prime";
    }else{
        for(int i=2;i*i<=n;i++){
        if(n%i==0){
            isprime = 0;
        }
        }
        if(isprime){
            cout<<"Number is prime";
        }
        else{
            cout<<"Not prime";
        }
        return 0;
    }
    

}