// Title: Concept of Operator Overloading
// Author: Inam Ul Haq
// Description
//    Concept of Operator Overloading using Friend Functions
//
//    In C++, operator overloading allows us to redefine the way operators
//    (like +, -, *, <<, etc.) work for user-defined types (classes/structs).
//
//    Why do we need it?
// 
//    - Built-in types (int, float, etc.) already know how to handle operators.
//      Example: 2 + 3 = 5
//    - But for custom classes (like Complex numbers, Fractions, Vectors, etc.),
//      the compiler doesn't know how '+' should behave.
//    - Operator overloading lets us define that behavior, making objects
//      of our class act more like mathematical entities.
//
//    Friend Function:
//    - Normally, private members cannot be accessed outside the class.
//    - But a friend function is an exception. It is not a member of the class,
//      but it can directly access private data of the class.
//    - That’s why we use friend functions for operator overloading,
//      because they need access to private members of *two* objects.
//
//    Rules:
//
//    1. We cannot create new operators — only redefine existing ones.
//    2. We cannot change the precedence or associativity of operators.
//    3. Some operators cannot be overloaded (like '.', '::', 'sizeof').
//    4. Overloaded operators should follow natural expectations
//       (e.g., + should "add", not "subtract").
//
//    Example in this code:
// 
//    - We define a 'complex' class that represents complex numbers (a + bi).
//    - We overload using friend functions:
//        +   → for adding two complex numbers.
//        <<  → for outputting a complex number directly to streams.
//
//    This way, instead of writing:
//        c3 = c1.add(c2);
//        c3.display();
//    We can write:
//        c3 = c1 + c2;
//        std::cout << c3;
//
//    The code becomes natural, readable, and close to mathematics.

#include <iostream>
class complex{
	private:
		int real;
		int imag;
	public:
		complex(int real=0,int imag=0):real(real),imag(imag){}
		
		// Setters and getters
		void setReal(int real){
			this->real=real;
		}
		void setImag(int imag){
			this->imag=imag;
		}
		int getReal()const{
			return real;
		}
		int getImag()const{
			return imag;
		}

		// Friend functions for operator overloading
		friend std::ostream& operator<<(std::ostream &cout,const complex &c);
		friend complex operator+(const complex &c1,const complex &c2);
};

// Overloading << operator as friend function
// Purpose: Print complex number directly using std::cout << c;
std::ostream& operator<<(std::ostream &out,const complex &c){
	out<<c.real<<" + "<<c.imag<<"i";
	return out;
}

// Overloading + operator as friend function
// Purpose: Add two complex numbers (a+bi) + (c+di) = (a+c) + (b+d)i
complex operator+(const complex &c1,const complex &c2){
	complex temp;
	temp.real=c1.real+c2.real;
	temp.imag=c1.imag+c2.imag;
	return temp;
}

int main(){
	complex c1(2,4);
	complex c2(4,2);
	
	// Using overloaded + operator
	complex c3=c1+c2;
	
	// Using overloaded << operator
	std::cout<<c3<<std::endl;
	
	return 0;
}
