// Title: Friend Function and Friend Class
// Author: Inam Ul Haq
// Description:
//   In C++ the keyword 'friend' is used to give special access rights.
//   By default, private and protected members of a class are not 
//   accessible outside the class. But using 'friend', we can allow
//   certain functions or classes to access them directly.
//
//   1. Friend Function
//        - A non-member function that can access private and protected
//          members of a class.
//        - Declared inside the class with 'friend' keyword.
//        - It is not a member function of that class.
//
//   2. Friend Class
//        - A complete class can be declared as friend.
//        - All member functions of that class get access to 
//          private and protected members of another class.
//        - Declared using 'friend class ClassName;' inside the class.

#include <iostream>
using namespace std;

// Example of Friend Function
class Box {
private:
    int length;
public:
    Box(int l=0): length(l) {}
    // declaring friend function
    friend void printLength(Box b);
};

// friend function definition
void printLength(Box b) {
    cout << "Length of box: " << b.length << endl;
}

// Example of Friend Class
class Engine {
private:
    int horsePower;
public:
    Engine(int hp=0): horsePower(hp) {}
    // declaring whole class as friend
    friend class Car;
};

class Car {
public:
    void showEnginePower(Engine e) {
        cout << "Engine power: " << e.horsePower << " HP" << endl;
    }
};

int main() {
    Box b1(20);
    printLength(b1);  // friend function accessing private member

    Engine e1(500);
    Car c1;
    c1.showEnginePower(e1); // friend class accessing private member
}
