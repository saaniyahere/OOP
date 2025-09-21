#include<iostream>
using namespace std;

class matrix{
    private:
    int arr[2][2];
    public:
    matrix(int a, int b, int c, int d){
        this->arr[0][0] = a;
        this->arr[0][1] = b;
        this->arr[1][0] = c;
        this->arr[1][1] = d;
    }
    void display(){
        cout<<"The matrix is: "<<endl;
        cout<<arr[0][0]<<" "<<arr[0][1]<<endl;
        cout<<arr[1][0]<<" "<<arr[1][1]<<endl;
    }
    friend void add(matrix m1, matrix m2);
};
void add(matrix m1, matrix m2){
    int ans[2][2];
    ans[0][0] = m1.arr[0][0] + m2.arr[0][0];
    ans[0][1] = m1.arr[0][1] + m2.arr[0][1];
    ans[1][0] = m1.arr[1][0] + m2.arr[1][0];
    ans[1][1] = m1.arr[1][1] + m2.arr[1][1];

    cout << "Sum of matrices is:" << endl;
    cout<<ans[0][0]<<" "<<ans[0][1]<<endl;
    cout<<ans[1][0]<<" "<<ans[1][1]<<endl;
    
}

int main(){
    matrix m1(1,2,3,4);
    matrix m2(3,4,5,6);

    m1.display();
    m2.display();

    add(m1,m2);

    return 0;
}