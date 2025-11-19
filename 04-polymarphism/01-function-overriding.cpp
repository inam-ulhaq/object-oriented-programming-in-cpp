//// Title: 
//// Author: Inam Ul Haq
//// Description:
//	Function overriding is an object oriented programming concept in
//	which derived class provide its own implementation for the function
//	that is already defined in base class or redefining the the function
//	of base class in derived class is called function overriding.
//	This is mainly used to achieve runtime polymorphism (dynamic binding).
//	
//	Key Points:
//
//	1. Base and Derived class relationship -> Overriding only works with
//	inheritance.
//
//	2. Same function signature -> Name, return type, and parameters must
//	match.
//
//	3. Virtual keyword (in C++) -> The base class function must be 
//	declared as virtual to enable overriding.
//
//	4. Dynamic dispatch -> Which function gets executed is decided at runtime,
//  not at compile-time.

#include <iostream>
class Animal{
	public:
		virtual void sound(){
			std::cout<<"Animal make a sound."<<std::endl;
		}
};
class Dog:public Animal{
	public:
		void sound()override{
			std::cout<<"Dog barks."<<std::endl;
		}
};
int main(){
	Animal *ptr=new Dog;
	ptr->sound(); // Output: Dog barks (runtime polymorphism)
	return 0;
	
}