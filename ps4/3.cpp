#include<iostream>
#include<string>
using namespace std;

class complex{
    int real, imag;
    public:
    complex(){
        real = 0;
        imag = 0;
    }
    complex(int r){
        real = r;
        imag = 0;
    }
    complex(int r, int i){
        real = r;
        imag = i;
    }
    void display(){
        cout<<"Complex number: "<<real<<" + i"<<imag<<endl;
    }   
};

int main(){
    complex c1;
    c1.display();
    complex c2(5);
    c2.display();
    complex c3(3,4);
    c3.display();
    return 0;
}