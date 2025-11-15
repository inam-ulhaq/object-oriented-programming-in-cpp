// Title: Class Vs Object
// Author: Inam Ul Haq
// Description:

// Class
//  - A **class** is a user define data type or **blueprint** or 
//    **template** for creating objects. 
//    It defines the **structure** (properties) and **behaviors** (methods) 
//    that objects created from the class will have.
//  - A class **does not hold data itself**, but it provides a structure 
//    for objects to store data and use the defined behaviors.
//  - In memory, the **class template** is used only for defining objects and is not stored as data.
//  - **Only the functions** (methods) of the class are stored in the **code section** 
//    (also known as the **text segment**) of memory. These methods are stored once and are shared 
//    across all instances (objects) of the class.
//  - The **data members** of the class (like `length`, `width`) are **not stored** in the code section. 
//    They are **allocated separately for each object** created from the class.
//  - When a method is called through an object, the **same function** is executed for different objects, 
//    but it operates on that object's **own data**.


// Object
//  - An **object** is an **instance** or variable of a class. When you create an object, 
//    it holds **real data** for the properties defined in the class and can 
//    call the methods that operate on that data.
//  - Objects represent **concrete instances** that can be manipulated during 
//    program execution, and are allocated memory in either the **stack** 
//    (for local objects) or the **heap** (for dynamically created objects), 
//    depending on their scope and lifetime during the program's runtime.
//  - The **dot operator** (`.`) is used with static objects to access their 
//    methods and properties.

#include <iostream>

class Rectangle {
    private:
        float length;  // Length of the rectangle
        float width;   // Width of the rectangle

    public:
        // Constructor with default values for length and width
        Rectangle(int length = 0, int width = 0) {
            setLength(length);
            setWidth(width);
        }

        // Copy Constructor
        Rectangle(const Rectangle &rect) {
            length = rect.length;
            width = rect.width;
        }

        // Setter for length
        void setLength(int length) {
            if (length >= 0) {
                this->length = length;
            } else {
                std::cerr << "Length can't be negative." << std::endl;
                return;
            }
        }

        // Setter for width
        void setWidth(int width) {
            if (width >= 0) {
                this->width = width;
            } else {
                std::cerr << "Width can't be negative." << std::endl;
                return;
            }
        }

        // Getter for length
        float getLength() {
            return length;
        }

        // Getter for width
        float getWidth() {
            return width;
        }

        // Method to calculate area of the rectangle
        float area() {
            return length * width;
        }

        // Method to calculate perimeter of the rectangle
        float perimeter() {
            return 2 * (length + width);
        }
};

int main() {
    // Creating an object of Rectangle with length 10 and width 20
    Rectangle rectangle(10, 20);

    // Outputting the area and perimeter of the rectangle
    std::cout << "Area of the rectangle is " << rectangle.area() << std::endl;
    std::cout << "Perimeter of the rectangle is " << rectangle.perimeter() << std::endl;

    return 0;
}
