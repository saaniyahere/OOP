#include<iostream>
#include<string>

using namespace std;

class Temp{
    private:
        float celsius;
    public:
        void set_value(float t){
            celsius = t;
        }
    
        void get_value(void){
            cout << "Celsius: " << celsius << " Fahrenheit: " << (celsius*9/5)+32 << endl;
        }
};

int main(){
    Temp t1;
    t1.set_value(35);
    t1.get_value();
    return 0;
}