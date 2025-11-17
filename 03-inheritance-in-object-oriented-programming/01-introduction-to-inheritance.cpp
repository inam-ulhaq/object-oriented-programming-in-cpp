// Title: Inheritance in Object-Oriented Programming
// Author: Inam Ul Haq
// Description:
//   Inheritance:
//     Inheritance is one of the core features of object-oriented programming.
//     It allows us to acquire the properties and behaviors (data members and
//     functions) of an existing class into a new class. In simple words, a new
//     class can be derived from an already defined class, reusing and extending
//     its functionality.
//
//   Explanation:
//     Imagine a car company designs a successful model and manufactures cars
//     from that design, which are then sold in the market. Later, the company
//     wants to launch a new model of the same car. Do you think they will
//     redesign the entire car from scratch? Of course not! Instead, they will
//     reuse the existing design and add new features to it. 
//
//     In the same way, when we create a new class that shares common features
//     with an already existing class, we don’t need to rewrite everything.
//     Instead, we inherit the new class from the existing one and extend it
//     with additional features. This saves time, avoids redundancy, and makes
//     the design more maintainable and scalable.
  
#include <iostream>
class Rectangle{
	private:
		int length;
		int width;
	public:
		Rectangle(int length=0,int width=0){
			setLength(length);
			setWidth(width);
		}
		void setLength(int length){
			if(length>=0){
				this->length=length;
			}else{
				this->length=1;
				return;
			}
		}
		void setWidth(int width){
			if(width>=0){
				this->width=width;
			}else{
				this->width=1;
				return;
			}
		}
		int getLength()const{
			return length;
		}
		int getWidth()const{
			return width;
		}
		virtual int area()const{
			return length*width;
		}
		virtual int perimeter()const{
			return 2*(length+width);
		}
};

class Cuboid:public Rectangle{
	int height;
	public:
		Cuboid(int length,int width,int height):Rectangle(length,width){
			setHeight(height);
		}
		void setHeight(int height){
			if(height>=0){
				this->height=height;
			}else{
				this->height=1;
				return;
			}
		}
		int area()const override{
			return 2*(getLength()*getWidth()+getLength()*height+getWidth()*height);
		}
		int perimeter()const override{
			return 4*(getLength()+getWidth()+height);
		}
};
int main(){
	Cuboid c1(4,8,10);
	std::cout<<"Total Surface area of cuboid is "<<c1.area()<<std::endl;
	std::cout<<"Perimeter of cuboid is "<<c1.perimeter()<<std::endl;
	return 0;
}