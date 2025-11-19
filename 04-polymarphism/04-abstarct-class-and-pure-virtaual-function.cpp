// Title: Abstract Class and Pure Virtual Function
// Author: Inam Ul Haq
// Description:
//    An abstract class is a class that cannot be instantiated directly.
//    It is designed to be a base class for other classes.
//    Abstract class contains at least one pure virtual function.
//    A pure virtual function is declared by assigning '= 0' in its declaration.
//    Any class derived from abstract class must override the pure virtual function,
//    otherwise it will also become abstract.
//
// Key Points:
//
// 1. Abstract class cannot create objects, it only provides a blueprint.
// 
// 2. At least one pure virtual function (virtual void fun() = 0;) must be present.
// 
// 3. Derived classes must provide their own implementation for pure virtual function.
// 
// 4. If derived class does not override, it will also be abstract.
// 
// 5. Abstract classes are mainly used to achieve polymorphism and design flexibility.

#include <iostream>
class Animal{
    public:
        // pure virtual function -> makes this class abstract
        virtual void sound() = 0;  
};

class Dog:public Animal{
    public:
        void sound() override{
            std::cout<<"Dog barks."<<std::endl;
        }
};

class Cat:public Animal{
    public:
        void sound() override{
            std::cout<<"Cat meows."<<std::endl;
        }
};

int main(){
    // Animal a;   // ? Error: Cannot create object of abstract class

    Animal* ptr;   // base class pointer allowed

    Dog d;
    Cat c;

    ptr = &d;
    ptr->sound();  // Output: Dog barks

    ptr = &c;
    ptr->sound();  // Output: Cat meows

    return 0;
}
