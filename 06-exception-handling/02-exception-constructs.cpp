// Title: Exception Handling
// Author: Inam Ul Haq
// Description:
//
// Exception:
// - Exception is a special runtime error.
// - It is recoverable using try-catch.
// - Example: divide by zero, file not found.
// - Faced by user but handled by programmer.
//
// Example: Division with Exception Handling
#include <iostream>
using namespace std;

int main() {
    try {
        int a , b;
        cout << "Enter two numbers: ";
        cin >> a >> b;

        if (b == 0)
            throw "Division by zero not allowed"; // throwing exception

        cout << "Result: " << a / b << endl;
    }
    catch (const char* msg) {
        cout << "Exception caught: " << msg << endl;
    }

    return 0;
}
