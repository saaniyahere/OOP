#include<iostream>
#include<string>

using namespace std;

class circle{
    private:
    double r;
    
    public:
    void set_value(double radius){
        r = radius;

    }
    double get_value(void){
        return r;
    }
    double getarea(void){
        double r = get_value();
        return 3.14*r*r;
    }
};

int main(){
    int r;
    cout << "Enter Radius: " ;
    cin >> r;
    circle c1;
    c1.set_value(r);
    cout << "\n----Details----" << endl;
    cout << "Radius: "<< c1.get_value() << endl;
    cout << "Area = " << c1.getarea() << endl;

    return 0;
}