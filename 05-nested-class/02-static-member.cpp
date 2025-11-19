// Title: Static Members in C++
// Author: Inam Ul Haq
// Description:
//   Static members are declared with the keyword 'static' inside a class.
//   They are not bound to any specific object of the class. 
//   Instead, they belong to the class itself.
//
//   Types:
//     1. Static Data Member
//        - Shared by all objects of the class.
//        - Only one copy exists in memory.
//        - Can be accessed using class name or object.
//        - Must be defined outside the class.
//
//     2. Static Member Function
//        - Can access only static data members and other static functions.
//        - Cannot access non-static data members directly (because it does not
//          have 'this' pointer).
//        - Can be called using class name or object.

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    // static data member
    static int count;
public:
    Student(string n) : name(n) {
        count++; // every time object created, count increases
    }

    // static function
    static void showCount() {
        cout << "Total Students: " << count << endl;
        // cout << name; // ? Not allowed (name is non-static)
    }

    void showName() {
        cout << "Student Name: " << name << endl;
    }
};

// definition of static data member
int Student::count = 0;

int main() {
    Student s1("Ali");
    Student s2("Ahmed");
    Student s3("Sara");

    // access via class name
    Student::showCount();

    // access via object
    s1.showCount();
}
