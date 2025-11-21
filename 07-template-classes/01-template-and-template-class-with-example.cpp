// Title: Template and  Template Class with Example (Stack)
// Author: Inam Ul Haq
// Description:
//
// What is Template:
// A template is a feature of C++ that allows writing generic code.
// Instead of writing the same function or class again and again 
// for int, float, double, string, we write it once with a placeholder type.
// The compiler then generates type-specific code when we use it.
// Example: template <class T> T add(T a, T b) works for int, float, etc.
//
// What is Template Class:
// A template class is a class that uses a template to work with any data type.
// The placeholder T is replaced with the actual type when an object is created.
// Example: Stack<int> makes a stack for integers, Stack<string> makes for strings.
//
// About this Code:
// 1. template <class T> tells compiler this is a generic class.
// 2. T *stk is the array to hold stack values of type T.
// 3. push() adds value to the stack, checking overflow.
// 4. pop() removes value, checking underflow.
// 5. In main, we create Stack<int> which works only with int.
// 6. Same class can be reused for float, string, etc.
// 7. Benefit: code reuse, type safety, no duplication.

#include <iostream>
template <class T>
class Stack{
	private:
		T *stk;
		int size;
		int top;
	public:
		Stack(int size){
			stk=new T[size];
			this->size=size;
			top=-1;
		}
		void push(T value);
		T pop();
};

template <class T>
void Stack<T>::push(T value){
	if(top==size-1){
		throw "Stack overflow.";
	}else{
		top++;
		stk[top]=value;
	}
}

template <class T>
T Stack<T>::pop(){
	if(top==-1){
		throw "Stack underflow.";
	}else{
		return stk[top--];
	}
}

int main(){
	Stack<int> stack(10);  // Stack for int
	stack.push(2);
	stack.push(5);
	std::cout<<stack.pop()<<std::endl;  // prints 5
}
