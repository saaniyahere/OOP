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
    friend complex addComplex(const complex &c1, const complex& c2);
};

complex addComplex(const complex& c1, const complex& c2){
    int r = c1.real+c2.real;
    int i = c1.imag+c2.imag;
    complex c3(r,i);
    return c3;
}

int main(){
    complex c1(2,3);
    complex c2(3,4);

    c1.display();
    c2.display();

    complex sum = addComplex(c1,c2);

    cout<<"Sum = ";
    sum.display();

    return 0;
}
