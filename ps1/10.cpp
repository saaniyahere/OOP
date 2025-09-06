#include <iostream>
using namespace std;

int main(){
    int y;
    cout << "enter year: ";
    cin >> y;
    if (y%4==0){
        cout<< "Leap year";
    }else{
        cout<<"Not leap year";
    }
    
    return 0;

}