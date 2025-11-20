// Title: Try, Throw and Catch
// Author: Inam Ul Haq
// Description:
//
// Points about throw:
// - throw is used to signal an error.
// - It can throw int, float, char, string, object.
// - The type thrown decides which catch will run.
// - Only one throw is executed at a time.
// - Syntax: throw value;
//
// Points about try:
// - try defines a block of risky code.
// - Code inside try may cause exception.
// - If exception occurs -> control jumps to catch.
// - If no exception occurs -> catch is skipped.
// - One try can connect with multiple catch blocks.
// - Syntax:
//   try {
//       // risky code
//   }
//
// Points about catch:
// - catch handles the exception thrown by throw.
// - Its parameter type must match thrown type.
// - Multiple catch blocks can exist for one try.
// - Catch executes only if matching throw occurs.
// - If no matching catch -> program terminates.
// - catch(...) can handle any type (catch-all).
// - Syntax:
//   catch(type variable) {
//       // handle exception
//   }

#include <iostream>
int main(){
	int choice;
	std::cout<<"Enter value(1 to 5): ";
	std::cin>>choice;
	try{
		if(choice==1){
			throw 1;
		}else if(choice==2){
			throw 2.0;
		}else if(choice==3){
			throw 3.0f;
		}else if(choice==4){
			throw 'c';
		}else if(choice==5){
			throw "string";
		}else{
			throw;
		}
	}catch(int e){
		std::cout<<"integer exception."<<std::endl;
	}catch(float e){
		std::cout<<"flaot exception."<<std::endl;
	}catch(double e){
		std::cout<<"double exception."<<std::endl;
	}catch(char e){
		std::cout<<"char exception."<<std::endl;
	}catch(const char* msg){
		std::cout<<"string exception."<<std::endl;
	}catch(...){
		std::cout<<"catch all exception."<<std::endl;
	}
}