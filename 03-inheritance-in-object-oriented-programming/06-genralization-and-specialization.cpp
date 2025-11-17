// Title: Specialization and Generalization
// Author: Inam Ul Haq
// Description:
//   In object oriented programming specialization and generalization
//   are two important concepts related to inheritance
//
//   Generalization:
//     Meaning:
//       It means creating a more general class which contains the
//       common features of many other classes
//     Example:
//       Car, Bike, Bus all have common features like wheels,
//       engine, seats. So we can make a general class Vehicle which
//       holds these common features
//     Purpose:
//       The purpose of generalization is to achieve polymorphism,
//       because when we treat all cars, bikes, buses as a Vehicle
//       then the same interface can work for all
//       It also reduces duplication of code
//
//   Specialization:
//     Meaning:
//       It means creating a more specific class from a general class
//       by adding extra features which belong only to that class
//     Example:
//       From Vehicle we can make Car class and add features like
//       air conditioner and music system which are not in all vehicles
//     Purpose:
//       The purpose of specialization is to extend the general class
//       and to add unique features which apply only to the new class
//
//   In short
//     Generalization moves from specific classes to a common class
//     Specialization moves from a common class to specific classes

#include <iostream>
using namespace std;

// General Class (Generalization)
class Vehicle{
    public:
        virtual void start(){   // virtual for polymorphism
            cout<<"Vehicle started"<<endl;
        }
        void stop(){
            cout<<"Vehicle stopped"<<endl;
        }
};

// Specialized Class (Specialization)
class Car:public Vehicle{
    public:
        void start() override{   // polymorphism in action
            cout<<"Car started with key"<<endl;
        }
        void playMusic(){
            cout<<"Music is playing in the car"<<endl;
        }
};

// Another Specialized Class
class Bike:public Vehicle{
    public:
        void start() override{
            cout<<"Bike started with self start"<<endl;
        }
        void doWheelie(){
            cout<<"Bike is doing a wheelie"<<endl;
        }
};

int main(){
    Vehicle* v1=new Car();
    Vehicle* v2=new Bike();

    // same interface start() works differently for Car and Bike
    v1->start();
    v2->start();

    delete v1;
    delete v2;
    return 0;
}
