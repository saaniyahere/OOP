#include<iostream>
#include<string>

using namespace std;

class rectangle{
    private:
    int l;
    int b;

    public:
    void set_value(int length, int breadth){
        l = length;
        b = breadth;

    }
    void get_value(void){
        cout << "Area of rectangle = " <<  l*b << endl;
    }
};

int main(){
    int l;
    int b;
    cout << "Enter length: " ;
    cin >> l;
    cout << "\nEnter breadth : ";
    cin >> b;
    rectangle r1;
    r1.set_value(l,b);
    r1.get_value();

    return 0;
}