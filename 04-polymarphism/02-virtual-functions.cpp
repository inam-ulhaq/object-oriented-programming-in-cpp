// Title: Virtual Function
// Author: Inam Ul Haq
// Description:
//    A virtual function is a member function in base class
//    which can be overridden in derived class. 
//    When we call this function through base class pointer/reference,
//    the derived class version will be executed at runtime. 
//    This allows us to achieve runtime polymorphism (dynamic binding).
//
// Key Points:
//
// 1. Declared in base class using keyword 'virtual'.
// 
// 2. Same signature must be provided in derived class.
// 
// 3. Works with base class pointers or references.
// 
// 4. Which version of function executes is decided at runtime, not compile-time.
// 
// 5. If derived class does not override, then base class version will be called.
 


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
    ptr->sound(); // Output: Dog barks (runtime polymorphism)

    ptr = &c;
    ptr->sound(); // Output: Cat meows (runtime polymorphism)

    return 0;
}
