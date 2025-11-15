// Title: Static and Dynamic Object
// Author: Inam Ul Haq
// Description:

// Static Object:
//  - Creating an object statically means the object is created at compile-time,
//    and its memory is typically allocated on the stack.
//  - The object’s lifetime is bound to the scope in which it is defined.
//    When the scope ends, the object is automatically destroyed.
//  - Static objects offer better performance due to faster stack allocation
//    and no need for manual memory management.
//  - The class components (data members and member functions) are accessed
//    using the dot (.) operator through the object name.
//  - Example:
//      Rectangle rect;     // Static allocation
//      rect.setLength(10); // Accessing members using dot operator

// Dynamic Object:
//  - A dynamic object is created during program execution using the `new` keyword,
//    and its memory is allocated on the heap.
//  - Dynamic objects offer more flexibility, as their lifetime can extend beyond
//    the scope in which they are created, but they require manual memory management.
//  - Access to dynamic objects is done via a pointer, and the arrow (->) operator
//    is used to access members.
//  - It’s the programmer's responsibility to explicitly deallocate the object using `delete`
//    to prevent memory leaks.
//  - Dynamic allocation allows object creation when the size or number of objects
//    is not known at compile-time.
//  - Example:
//      Rectangle* rectPtr = new Rectangle();   // Dynamic allocation
//      rectPtr->setLength(10);                 // Accessing members using arrow operator
//      delete rectPtr;                         // Manual memory deallocation



#include <iostream>

class Rectangle{
	private:
		float length;
		float width;
	public:
		Rectangle(float length,float width){
			setLength(length);
			setWidth(width);
		}
		void setLength(float length){
			if(length>=0){
				this->length=length;
			}else{
				std::cerr<<"Length can not be negetive."<<std::endl;
				return;
			}
		}
		void setWidth(float width){
			if(width>=0){
				this->width=width;
			}else{
				std::cerr<<"Width can not be negetive."<<std::endl;
				return;
			}
		}
		float getLength(){
			return length;
		}
		float getWidth(){
			return width;
		}
		float area(){
			return length*width;
		}
		float perimeter(){
			return 2*(length+width);
		}
};
int main(){
//	static object
	Rectangle rect(10,20);
	std::cout<<"Area of static rectangle object is "<<rect.area()<<std::endl;
	std::cout<<"Perimeter of static rectangle object is "<<rect.perimeter()<<std::endl;
	
//	dynamic object
	Rectangle *ptrRect=new Rectangle(4,5);
	std::cout<<"Area of dynamic Rectangle object is "<<ptrRect->area()<<std::endl;
	std::cout<<"perimenter of dynamic Rectangle object is "<<ptrRect->perimeter()<<std::endl;
	return 0;

}