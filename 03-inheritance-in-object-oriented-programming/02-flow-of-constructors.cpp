//  title: Constructors in Inheritance
//  Author: Inam Ul Haq
//  Description:
//  When we are talking about base and derived class constructors
//  there are two things related to constructors: calling of 
//  constructor and execution of constructor. Both of them are different.
//
//  1) Calling of constructor:
//     - When we create an object of derived class, the constructor of 
//       the derived class is called first (syntactically).
//
//  2) Execution of constructor:
//     - At runtime, the base class constructor is executed first,
//       then the derived class constructor is executed.
//
//  Example below shows the difference clearly.

#include <iostream>
class Base {
    public:
        Base() {
            std::cout << "Non parameterized constructor of Base class." << std::endl;
        }
        Base(int x) {
            std::cout << "Parameterized constructor of Base class." << std::endl;
        }
};

class Derived : public Base {
    public:
        Derived() {
            std::cout << "Non parameterized constructor of Derived class." << std::endl;
        }
        Derived(int x) {
            std::cout << "Parameterized constructor of Derived class." << std::endl;
        }
        Derived(int x, int y) : Base(y) {
            std::cout << "Double parameterized constructor of Derived class." << std::endl;
        }
};

int main() {
    Derived d1;        // Execution order:
                       // 1. Base()
                       // 2. Derived()

    Derived d2(1);     // Execution order:
                       // 1. Base()   (default, because Derived(int) does not call Base(x))
                       // 2. Derived(int)

    Derived d3(1,1);   // Execution order:
                       // 1. Base(int)
                       // 2. Derived(int,int)
	return 0;
}
