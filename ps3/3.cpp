#include<iostream>
#include<string>

using namespace std;

class book{
    private:
    string title;
    float price;

    public:
    void set_value(string t, float p){
        title = t;
        price = p;
    }
    void get_value(void){
        cout << title << " costs Rs." << price << endl;
    }
};

int main(){
    string t;
    float p;
    cout << "Enter title: " ;
    getline(cin, t);
    cout << "\nEnter price: ";
    cin >> p;
    book b1;
    b1.set_value(t,p);
    b1.get_value();

    return 0;
}