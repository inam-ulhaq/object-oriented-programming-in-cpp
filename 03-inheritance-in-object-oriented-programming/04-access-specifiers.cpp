// Title: Access Specifiers
// Author: Inam Ul Haq
// Description:
//   Access specifiers are keywords in C++ which are used to define
//   how the members (data and functions) of a class can be accessed
//   from outside the class. 
//
//   There are mainly 3 types of access specifiers
//
//   1) public
//      Members declared as public can be accessed from anywhere
//      in the program inside or outside of the class
//
//   2) private
//      Members declared as private can only be accessed inside
//      the same class
//      Outside the class these members are hidden
//
//   3) protected
//      Members declared as protected are like private for the 
//      outside world, but they can be accessed in derived classes
//
//   Note: By default the members of class are private while in
//   struct they are public

#include <iostream>
using namespace std;

class Demo{
    private:
        int x;   // private accessible only inside class
    protected:
        int y;   // protected accessible inside class and derived class
    public:
        int z;   // public accessible anywhere in program

        void setData(int a,int b,int c){
            x=a;   // ok private allowed here
            y=b;   // ok protected allowed here
            z=c;   // ok public allowed here
        }
        void show(){
            cout<<"x = "<<x<<endl;
            cout<<"y = "<<y<<endl;
            cout<<"z = "<<z<<endl;
        }
};

class Derived:public Demo{
    public:
        void access(){
            // x=10;   error private not accessible here
            y=20;      // ok protected accessible in derived
            z=30;      // ok public accessible
        }
};

int main(){
    Demo d1;
    d1.z=100;    // ok public accessible directly
    // d1.x=50;  error private not accessible
    // d1.y=60;  error protected not accessible

    d1.setData(10,20,30); // correct way to set private and protected
    d1.show();

    Derived d2;
    d2.access();
    d2.show();
}
