#include <iostream>

using namespace std;

int main() {
    int i=1, sum=0;

    while (i <=100) {
        if (i %2==0) {
            sum+=i;
        }
        i++;
    }

    cout << "Sum of first 50 even numbers is: " << sum << endl;
    return 0;
}
