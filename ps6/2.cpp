#include <iostream>
#include <string>
using namespace std;

class student{
    private:
        string name;
        int rollNo;
        int mark;

    public:
        student(){
            this->name = "NIL";
            this->rollNo = 0;
            this->mark = 0;
        }
        student(string n, int r){
            this->name = n;
            this->rollNo = r;
            this->mark = 0;
        }
        student(string n, int r, int m){
            this->name = n;
            this->rollNo = r;
            this->mark = m;
        }

        void getDetails(){
            cout<< "--------------"<<endl;
            cout <<"Name : "<<this->name << endl;
            cout<< "Roll No : "<< this->rollNo<<endl;
            cout <<"Mark : "<<this->mark <<endl;
        }


};

int main(){
    student s1;
    s1.getDetails();
    student s2("Sam", 23);
    s2.getDetails();
    student s3("Sunny", 24, 50);
    s3.getDetails();
    return 0;
}