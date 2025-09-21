#include<iostream>
using namespace std;

class employee{
    private:
        int id;
        int salary;
        static int count;

    public:
        employee(){
            this->id = 0;
            this->salary = 0;
            count++;
        }
        employee(int i, int s){
            this->id = i;
            this->salary = s;
            count++;
        }
        void getDetails(){
            cout<<endl<<"Employee No: "<<count<<"---" <<endl;
            cout<<"ID: "<< this->id <<endl;
            cout<<"Salary: "<< this->salary<<endl;
        }

};

int employee::count=0;

int main(){
    employee e1(2345, 50000);
    e1.getDetails();
    employee e2(2234, 40500);
    e2.getDetails();

    return 0;
}