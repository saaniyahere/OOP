#include<iostream>
#include<string>
using namespace std;

class student{
    private:
    string name;
    int age;
    int marks;
    public:
    student(){
        name = "Nil";
        age = 0;
        marks = 0;
    }
    student(string n, int a, int m){
        name = n;
        age = a;
        marks = m;
    }
    void getdetails(){
        cout<<endl<<"Details: "<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Marks: "<<marks<<endl;
    }

};

int main(){
    student s1;
    s1.getdetails();
    student s2("Saaniya", 19, 94);
    s2.getdetails();
    return 0;
}