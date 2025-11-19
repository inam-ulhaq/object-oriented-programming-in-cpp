// Title: Run Time Polymorphism
// Author: Inam Ul Haq
// Description:
//    Run time polymorphism (also called dynamic polymorphism)
//    is achieved when the function call is resolved at runtime
//    instead of compile-time. This is mainly done using
//    function overriding with virtual functions.
//    The base class pointer or reference is used to call
//    the overridden function of derived class, and the
//    correct version is decided at runtime.
//
// Key Points:
//
// 1. Achieved by using function overriding and virtual functions.
// 
// 2. Base class function must be declared as virtual.
// 
// 3. Works with base class pointers/references pointing
//    to derived class objects.
// 
// 4. Correct function implementation is chosen at runtime
//    (dynamic dispatch).
// 
// 5. If derived class does not override, base class version runs.

#include <iostream>
class Animal{
    public:
        virtual void sound(){  
            std::cout<<"Animal makes sound."<<std::endl;
        }
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
    Animal* ptr;   // base class pointer
    
    Dog d;
    Cat c;

    ptr = &d;
    ptr->sound();  // Output: Dog barks (runtime polymorphism)

    ptr = &c;
    ptr->sound();  // Output: Cat meows (runtime polymorphism)

    return 0;
}
