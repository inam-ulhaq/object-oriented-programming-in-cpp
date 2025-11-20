// Title: Throw and Catch Between Functions
// Author: Inam Ul Haq
// Description:
//
//	 Imagine you have a function receiving some input.
//	 If input is valid, function returns proper output.
//	 But if input is wrong, function cannot return result.
//	 Should program crash? No, it must inform the caller.
//	 How can function communicate this problem clearly?
//	 By using throw and catch constructs in C++.
//	 Caller should expect two outcomes from the function.
//	 Either a valid result or an exception message.
//	 This way program continues without sudden crashing.

// Example:
//	 Throwing exception from a function.
#include <iostream>
using namespace std;

int divide(int a, int b)throw(string) {
    if (b == 0)
        throw "Division by zero not allowed"; // throw error
    return a / b;
}

int main() {
    try {
        cout << divide(10, 2) << endl; // valid
        cout << divide(10, 0) << endl; // throws exception
    }
    catch (const char* msg) {
        cout << "Exception caught: " << msg << endl;
    }
    return 0;
}
