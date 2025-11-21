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
	Stack<int> stack(10);
	stack.push(2);
	stack.push(5);
	std::cout<<stack.pop()<<std::endl;
}