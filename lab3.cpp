#include<iostream>

using namespace std;


class PERSON{
    int id;            // Private Attributes of class 
    string name;
    char Gender;
  
 public:

    PERSON(){
        id = 1;         // Default Constructor 
        name = "Ali";
        Gender = 'M';
    }

    ~PERSON(){
        cout<<"Default Constructor Called"<<endl;  // Destructor
    }

    PERSON(int i,string n, char g){    // Parameterized Constructor
        id = i;
        name = n;
        Gender = g;
    }

    void setData(int i, string n, char g){   // Member function to set data of attributes
        id = i;
        name = n;
        Gender = g;
    }

    void showdata(){
        cout<<"ID: "<<id<<endl;       // Member function to display data of attributes
        cout<<"Name: "<<name<<endl;
        cout<<"Gender: "<<Gender<<endl;
    }

};

int main(){

    PERSON p1(100, "John", 'M');
    // p1.setData(101, "John", 'M');
    p1.showdata();
   cout<<"-----------------------------"<<endl;
    return 0;
}