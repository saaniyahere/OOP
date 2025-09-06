#include<iostream>
#include<string>

using namespace std;

class University{
    private:
        string name;
        int rank;
    public:
        void set_value(string n, int r){
            name = n;
            rank = r;
        }
    
        void get_value(void){
            cout << "University: " << name << " Rank: " << rank << endl;
        }
};

int main(){
    University u1;
    u1.set_value("SaiU", 1000000);
    //u1.name = "NewSaiU";
    //doesnt work because name is private

    u1.get_value();
    
    return 0;
}