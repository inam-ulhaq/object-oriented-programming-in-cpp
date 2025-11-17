// Title: Base Class Pointer and Derived Class Object
// Author: Inam Ul Haq
// Description:
//	Imagine there is a basic car and an advance car which is derived or
//	extension of the basic car. This means that the advance car contains
//	all the features of the basic car plus some more advanced features. 
//	
//	Now can we say about the advance car that "this is a basic car"? 
//	Yes, because the basic car is inside the advance car with additional 
//	features. So we can always use the features of the basic car in it.
//	
//	But about the basic car, we can't say "this is an advance car" because
//	that would mean we are also expecting the extra features which are 
//	not there in the basic car.
//	
//	In the same way, when we derive a class from another class, the derived
//	class has all the features of the base class plus some extra features.
//	So if we create a pointer of the base class and point it to the object
//	of the derived class, then this is correct and possible. But we can 
//	access only those features through that pointer which are in the base 
//	class.
//	
//	But we cannot make a pointer of the derived class and point it on an
//	object of the base class. Because that is like expecting the features 
//	which are not present in the base class.
//
#include <iostream>
class BasicCar {
public:
    void start() {
        std::cout << "Basic car is started." << std::endl;
    }
};

class AdvanceCar : public BasicCar {
public:
    void airCondition() {
        std::cout << "Air Condition is on." << std::endl;
    }
};

int main() {
    // Base class pointer pointing to derived class object (Allowed)
    BasicCar *car = new AdvanceCar;
    car->start();              // OK, available in BasicCar
    // car->airCondition();    // Not allowed, pointer is of type BasicCar

    // Derived class pointer pointing to base class object (Not Allowed)
    // AdvanceCar *carPtr = new BasicCar; // Compile-time error

    // Clean up
    delete car;
    return 0;
}
