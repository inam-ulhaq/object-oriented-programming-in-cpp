// Title: IsA Relation and HasA Relation
// Author: Inam Ul Haq
// Description:
//  A class may have two type of relations with another class, either
//  another class directly inherited form that class or either another
//  class creating object of that class.
//
//  1) IsA relation:
//     Imagin a class Vehicle and class Car is inheriting form Vehicle
//     then all the features of Vehicle are there in class Car.
//     So we can say Car is a Vehicle because all the feature of Vehicle
//     is already there in Car. So we say that the relation of Vehicle and
//     Car is IsA relation.
//
//  2) HasA relation:
//     Imagin a class Engine and Bike and inside the Bike object of Engine
//     is created. So Bike have object of Engine, that's why we say that
//     the relation of Bike and Engine is HasA relation.

#include <iostream>
using namespace std;

// ----- IsA relation -----
class Vehicle {
    public:
        void drive(){
            cout<<"Vehicle is driving..."<<endl;
        }
};

class Car:public Vehicle{   // Car IsA Vehicle
    public:
        void honk(){
            cout<<"Car horn: Beep Beep!"<<endl;
        }
};

// ----- HasA relation -----
class Engine{
    public:
        void start(){
            cout<<"Engine started!"<<endl;
        }
};

class Bike{
    private:
        Engine e;    // Bike HasA Engine
    public:
        void ride(){
            e.start();
            cout<<"Bike is riding..."<<endl;
        }
};

int main(){
    // IsA relation example
    Car c1;
    c1.drive();   // from Vehicle
    c1.honk();    // from Car
    
    cout<<"-----------------------"<<endl;

    // HasA relation example
    Bike b1;
    b1.ride();
}
