// Title: Demonstrating Exception Handling for Stack Overflow and Underflow.
// Author: Inam Ul Haq

#include <iostream>
class Stack{
	private:
		int *stk;
		int size;
		int top;
	public:
		Stack(int size){
			this->size=size;
			stk=new int[size];
			top=-1;
		}
		void push(int value){
			if(top==size-1){
				throw "Stack overflow.";
			}else{
				top++;
				stk[top]=value;
			}
		}
		int pop(){
			if(top==-1){
				throw "Stack underflow.";
			}else{
				top--;
				return stk[top+1];
			}
		}
};
int main(){
	try{
		Stack stack(10);
		//stack.pop();
		for(int i=0;i<=10;i++)
		stack.push(i);
	}
	catch(const char* msg){
		std::cout<<"Exception caught: "<<msg<<std::endl;
	}
	return 0;
}