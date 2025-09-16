#include<iostream>
using namespace std;

class rectangle{
    private:
    int length, breadth;
    public:
    void set_values(int l, int b){
        length = l;
        breadth = b;
    }
    rectangle(){
        length = 0;
        breadth = 0;
    }
    void area(){
        cout<<"Area: "<<length*breadth<<endl;
    }

};

int main(){
    rectangle r1;
    r1.area();
    r1.set_values(10,5);
    r1.area();
    return 0;
}
