#include<iostream>
using namespace std;

class Time{
    int hours, minutes, seconds;
    public:
    Time(){
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    Time(int h, int m){
        hours = h;
        minutes = m;
        seconds = 0;
    }
    Time(int h, int m, int s){
        hours = h;
        minutes = m;
        seconds = s;
    }
    void display(){
        cout<<"Time: "<<hours<<" hrs "<<minutes<<" mins "<<seconds<<" secs"<<endl;
    }   
};

int main(){
    Time t1;
    t1.display();
    Time t2(5,30);
    t2.display();
    Time t3(3,45,20);
    t3.display();

    return 0;
}