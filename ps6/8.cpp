#include<iostream>
using namespace std;

class circle{
    private:
    int radius;
    public:
    circle(int n){
        this->radius=n;
    }
    void area(){
        int a = setPi() * radius * radius;
        cout<< "Area = "<< a <<endl;
    }
    static double setPi();
};

double circle::setPi(){
    return 3.14159265359;
}

int main(){
    circle c1(4);
    c1.area();

    return 0;
}
