#include<iostream>
#include<string>
using namespace std;

class car{
    private:
    string brand;
    float price;

    public:
    car(){
        this->brand = "NIL";
        this->price=0;
    }
    car(string b, float p){
        this->brand = b;
        this->price = p;
    }
    void getDetails(){
        cout <<endl << "Car Details: "<<endl;
        cout<<"Brand name: "<< brand<< endl;
        cout << "Price: " << price << endl; 
    }
    ~car(){
        cout<<endl<<"Object destroyed"<<endl;
    }
};

int main(){
    car c1("Hyundai", 400000);
    c1.getDetails();
    car c2("Suzuki", 1000000);
    c2.getDetails();

    return 0;
}