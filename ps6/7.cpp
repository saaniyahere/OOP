#include<iostream>
using namespace std;

class counter{
    private:
    int count;
    static int totalcount;
    public:
    counter(int n){
        this->count=n;
        totalcount++;
        cout<< "New count added."<< endl;
        cout<<"Total count= "<< totalcount << endl;
        
    }
};

int counter::totalcount = 0;

int main(){
    counter c1(3);
    counter c2(4);
    counter c3(98);
    counter c4(34);
    counter c5(2);
    return 0;
}