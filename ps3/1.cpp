#include<iostream>
#include<string>

using namespace std;

class student{
    private:
    string name;
    int age;

    public:
    void set_value(string n,  int a){
        name = n;
        age = a;
    }
    void get_value(void){
        cout << "Your name is "<< name << " and you are "<< age <<" years old";
    }
};

int main(){
    student s1;
    s1.set_value("Sai", 23);
    s1.get_value();
    return 0;
}
