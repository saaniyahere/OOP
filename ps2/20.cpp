#include <iostream>

using namespace std;

int main() {
    int mark, sum=0, count=0;
    while (true) {
        cout << "Enter marks: ";
        cin >> mark;
        if (mark==-1)
            break;
        sum+=mark;
        count++;
    }
    if (count > 0)
        cout<<"Average marks: "<< (sum/(float)count) <<endl;
    else
        cout<<"No marks entered."<<endl;
    return 0;
}