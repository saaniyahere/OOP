#include<iostream>
using namespace std;

class Rectangle{
    private:
    int length, breadth;

    public:
    Rectangle(){
        this->length=0;
        this->breadth=0;
    }
    Rectangle(int l, int b){
        this->length=l;
        this->breadth=b;
    }
    int Area(){
        return length *breadth;
    }
    friend void compareArea(Rectangle r1, Rectangle r2);

};

void compareArea(Rectangle r1, Rectangle r2){
    if(r1.Area() > r2.Area()){
        cout<<"Area of first rectangle greater than second.";
    }else{
        cout<<"Area of second rectangle greater than first.";
    }
}

int main(){
    Rectangle r1(2,3);
    Rectangle r2(4,5);

    compareArea(r1,r2);

    return 0;
}