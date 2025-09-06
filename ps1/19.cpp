#include <iostream>
using namespace std;

int main(){
    int SI, p, r, t;
    cout << "Enter principle amount: ";
    cin >> p;
    cout << "Enter rate of interest: ";
    cin >> r;
    cout << "Enter duration in years: ";
    cin >> t;

    SI = (p*r*t)/100;
    cout << "Simple interest (SI) = " << SI << endl;
    
    return 0;
}