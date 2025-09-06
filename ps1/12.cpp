#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c;
    cout << "Enter the coefficients of the quadratic equation: " << endl;
    cin >> a >> b >> c;

    float D = (b * b) - (4 * a * c);
    float root1, root2;

    if (D > 0) {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        cout << "The roots of the given quadratic equation are real and distinct: " 
             << root1 << " and " << root2 << endl;
    }
    else if (D == 0) {
        root1 = root2 = -b / (2 * a);
        cout << "The roots are real and equal: " << root1 << " and " << root2 << endl;
    }
    else {
        float realPart = -b / (2 * a);
        float imagPart = sqrt(-D) / (2 * a);
        cout << "The given quadratic equation has imaginary roots: "
             << realPart << " + " << imagPart << "i and "
             << realPart << " - " << imagPart << "i" << endl;
    }

    return 0;
}

