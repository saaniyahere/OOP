#include <iostream>
using namespace std;

int main(){
    
    for(int i=2;i<=100;i++){
        int isprime =1;
        for(int j=2;j<i;j++){
            if (i%j==0){
                isprime=0;
            }
        }
        if(isprime){
            cout << i << endl;
        }
    }
    return 0;
    
}