#include<iostream>
#include<string>

using namespace std;

class car{
    private:
    string brand;
    string model;

    public:
    void set_value(string b, string m){
        brand = b;
        model = m;
    }
    void get_value(){
        cout << "Brand  " << brand << endl;
        cout << "Model : " << model << endl;
    }
};

int main(){
    int n;
    cout << "Enter number of cars: ";
    cin >> n;

    car cars[n];

    for(int i=0; i<n; i++){
        string b;
        string m;
        cout << "\nEnter details for car " << i + 1 << endl;
        cout << "Brand : ";
        cin >> b;
        cout << "Model : ";
        cin >> m;

        cars[i].set_value(b, m);
    }
    cout << "\n--- Car Details ---" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Car " << i + 1 << ":" << endl;
        cars[i].get_value();
        cout << "---------------------" << endl;
    }

    return 0;

    
}