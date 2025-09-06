#include <iostream>

using namespace std;

int main() {
    int count = 0;
    int num = 0;

    while (count < 10) {
        if (num % 2 == 0) {
            cout << num << endl;
            count++;
        }
        num++;
    }

    return 0;
}
