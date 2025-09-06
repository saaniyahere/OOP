#include<iostream>
#include<string>

using namespace std;

class employee{
    private:
    int id;
    int s;

    public:
    void set_value(int identification, int salary){
        id = identification;
        s = salary;
    }
    void get_value(){
        cout << "ID:  " << id << endl;
        cout << "Salary : " << s << endl;
    }
};

int main(){
    int numemployees;
    cout << "Enter number of employees: ";
    cin >> numemployees;

    employee employees[numemployees];

    for(int i=0; i<numemployees; i++){
        int id;
        int s;
        cout << "\nEnter details for Employee " << i + 1 << endl;
        cout << "ID: ";
        cin >> id;
        cout << "Salary: ";
        cin >> s;

        employees[i].set_value(id, s);
    }
    cout << "\n--- Employee Details ---" << endl;
    for (int i = 0; i < numemployees; i++) {
        cout << "Employee " << i + 1 << ":" << endl;
        employees[i].get_value();
        cout << "---------------------" << endl;
    }

    return 0;

    
}