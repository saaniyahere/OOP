#include<iostream>
#include<string>
using namespace std;

class books{
    string title, author;
    int price;

    public:
    books(){
        title = "Nil";
        author = "Nil";
        price = 0;
    }
    books(string t, string a){          
        title = t;
        author = a;
        price = 0;
    }
    books(string t, string a, int p){
        title = t;
        author = a;
        price = p;
    }
    void display(){                
        cout<<endl<<"Book Details: "<<endl;
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: Rs."<<price<<endl;
    }       

};

int main(){
    books b1;
    b1.display();
    books b2("The Alchemist", "Paulo Coelho");
    b2.display();
    books b3("Rich Dad Poor Dad", "Robert", 350);
    b3.display();
    return 0;
}