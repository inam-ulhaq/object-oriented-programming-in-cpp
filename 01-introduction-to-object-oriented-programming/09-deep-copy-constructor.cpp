// Title: Deep Copy Constructor
// Author: Inam Ul Haq
// Description:
//	Deep Copy Constructor used when the object contains dynamically
//	allocated memory (like pointers). It duplicates the actual data,
//	not just the memory address, to avoid shared resources. This 
//	prevents problems like double deletion or unexpected data changes.
// 
#include <iostream>
class Rectangle{
	float *length;
	float *width;
	public:
		Rectangle(float length,float width){
			this->length = new float(length);
        	this->width = new float(width);
		}
		Rectangle(const Rectangle &other){
			length=new float(*(other.length));
			width=new float(*(other.width));
		}
	
		void setLength(float length){
			if(length>=0){
				*(this->length)=length;
			}else{
				std::cerr<<"Length can't be negetive."<<std::endl;
				return;
			}
		}
		void setWidth(float width){
			if(width>=0){
				*this->width=width;
			}else{
				std::cerr<<"Width can't be negetive."<<std::endl;
				return;
			}
		}
		float getLength()const{
			return *length;
		}
		float getWidth()const{
			return *width;
		}
		float area()const{
			return (*length)*(*width);
		}
		float perimeter()const{
			return 2*(*length+*width);
		}
};
int main(){
	
	Rectangle *ptrRect1=new Rectangle(10,5);
	Rectangle *ptrRect2=new Rectangle(*ptrRect1);
	std::cout<<"Area of Rect1 is "<<ptrRect1->area()<<std::endl;
	std::cout<<"Perimeter of Rect1 is "<<ptrRect1->perimeter()<<std::endl;
	
	std::cout<<"Area of Rect2 is "<<ptrRect2->area()<<std::endl;
	std::cout<<"Perimeter of Rect2 is "<<ptrRect2->perimeter()<<std::endl;
	
	
}