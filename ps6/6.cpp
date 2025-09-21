#include<iostream>
using namespace std;

class complex{
    private:
    int real, imag;
    public:
    complex(int r, int i){
        this->real = r;
        this->imag = i;
    }
    void display(){
        cout<< "Number is : "<< real << "+" << imag<<"i"<<endl;
    }

    ~complex(){
        cout<<"Complex number destroyed."<<endl;
    }
};

int main(){
    complex c1(2,3);
    complex c2(3,4);

    c1.display();
    c2.display();

    return 0;
}