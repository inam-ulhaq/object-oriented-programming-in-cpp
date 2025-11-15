// Title: Constructor Overloading
// Author: Inam Ul Haq
// Description:

/*
Constructor:
    A constructor is a special function inside a class that runs automatically
    when an object of the class is created. It helps initialize the object’s attributes
    and allocate resources if needed. Constructors have no return type.

Types of Constructors:

1. Compiler-Generated Constructor:
    If you do not define any constructor in your class, the compiler automatically
    creates one for you. This default constructor allows you to create objects
    even without explicitly writing a constructor.

2. User-Defined Constructors:
   
   - Non-Parameterized Constructor (Default Constructor):
        This constructor takes no arguments and initializes the object with default values.
        It is used when you want to set standard initial values or do setup tasks.

   - Parameterized Constructor:
        This constructor takes parameters so you can create objects with specific values.
        It provides flexibility to initialize attributes differently for each object.

   - Copy Constructor:
        This constructor creates a new object by copying an existing object's data.
        It is useful when you want a new object to have the same state as another.

   - Deep Copy Constructor:
        Used when the object contains dynamically allocated memory (like pointers).
        It duplicates the actual data, not just the memory address, to avoid shared resources.
        This prevents problems like double deletion or unexpected data changes.
*/

#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    // Compiler-generated default constructor would exist if none is defined
    
    // Non-Parameterized Constructor (Default Constructor)
    Rectangle() {
        length = 1;
        width = 1;
        cout << "Default constructor called\n";
    }

    // Parameterized Constructor
    Rectangle(int l, int w) {
        length = l;
        width = w;
        cout << "Parameterized constructor called\n";
    }

    // Copy Constructor  
    Rectangle(const Rectangle &other) {
        length = other.length;
        width = other.width;
        cout << "Copy constructor called\n";
    }

    // Method to calculate area
    int area() {
        return length * width;
    }
};

int main() {
    Rectangle r1;               // Calls default constructor
    Rectangle r2(10, 5);        // Calls parameterized constructor
    Rectangle r3 = r2;          // Calls copy constructor

    cout << "Area of r1: " << r1.area() << endl;
    cout << "Area of r2: " << r2.area() << endl;
    cout << "Area of r3: " << r3.area() << endl;

    return 0;
}
