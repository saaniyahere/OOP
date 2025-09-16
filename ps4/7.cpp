#include<iostream>
using namespace std;

class Distance{
    int feet, inches;
    public:
    Distance(){
        feet = 0;
        inches = 0;
    }
    Distance(int f){
        feet = f;
        inches = 0;
    }               
    Distance(int f, int i){
        feet = f;
        inches = i;
    }
    void display(){
        cout<<"Distance: "<<feet<<" feet "<<inches<<" inches"<<endl;
    }
};

int main(){
    Distance d1;
    d1.display();
    Distance d2(2);
    d2.display();
    Distance d3(4,5);
    d3.display();

    return 0;

}