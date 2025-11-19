// Title: Interface (Abstract class with only pure virtual functions)
// Author: Inam Ul Haq
// Description:
//    If an abstract class contains only pure virtual functions
//    and no data members or concrete functions, it acts like
//    an interface. This means the class only defines the
//    "contract" (what functions must exist) but not their
//    implementation. 
//    Any derived class must provide implementation for all
//    pure virtual functions, otherwise it will also become abstract.
//
// Key Points:
//
// 1. Abstract class with only pure virtual functions = Interface.
// 
// 2. Defines "what" must be done, not "how" it is done.
// 
// 3. All derived classes must implement every pure virtual function.
// 
// 4. Used to enforce a common set of behaviors across unrelated classes.
// 
// 5. Provides high flexibility and design consistency.

#include <iostream>
class Shape{
    public:
        // pure virtual functions only -> interface style
        virtual void draw() = 0;
        virtual void area() = 0;
};

class Circle:public Shape{
    public:
        void draw() override{
            std::cout<<"Drawing Circle."<<std::endl;
        }
        void area() override{
            std::cout<<"Area = PIr^2"<<std::endl;
        }
};

class Rectangle:public Shape{
    public:
        void draw() override{
            std::cout<<"Drawing Rectangle."<<std::endl;
        }
        void area() override{
            std::cout<<"Area = l * w"<<std::endl;
        }
};

int main(){
    // Shape s; // Error: Cannot create object of interface (abstract class)

    Shape* ptr;

    Circle c;
    Rectangle r;

    ptr = &c;
    ptr->draw();   // Output: Drawing Circle.
    ptr->area();   // Output: Area = PIr^2

    ptr = &r;
    ptr->draw();   // Output: Drawing Rectangle.
    ptr->area();   // Output: Area = l * w

    return 0;
}
