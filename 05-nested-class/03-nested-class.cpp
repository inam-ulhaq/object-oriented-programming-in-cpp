#include <iostream>
class Student{
	std::string name;
	int rollNo;
	std::string department;
	class Address{
		private:
			std::string district;
			std::string tehsil;
			std::string vallige;
		public:
			Address(std::string district="",std::string tehsil="",std::string vallige=""):
				district(district),tehsil(tehsil),vallige(vallige){};
			void setDistrict(std::string district){
				this->district=district;
			}
			void setTehsil(std::string tehsil){
				this->tehsil=tehsil;
			}
			void setVallige(std::string vallige){
				this->vallige=vallige;
			}
			std::string getDistrict()const{
				return district;
			}
			std::string getTehsil()const{
				return tehsil;
			}
			std::string getVallige()const{
				return vallige;
			}
	};
	Address address;
	
	public:
		Student(std::string name="",int rollNo=1,std::string department="",
		std::string district="",std::string tehsil="",std::string vallige=""):
		name(name),rollNo(rollNo),department(department)
		{
			address.setDistrict(district);
			address.setTehsil(tehsil);
			address.setVallige(vallige);
		}
		void showStudent(){
			std::cout<<"Name: "<<name<<std::endl;
			std::cout<<"rollNO : "<<rollNo<<std::endl;
			std::cout<<"department : "<<department<<std::endl;
			std::cout<<"district : "<<address.getDistrict()<<std::endl;
			std::cout<<"tehsil : "<<address.getTehsil()<<std::endl;
			std::cout<<"vallige : "<<address.getVallige()<<std::endl;
			
		}
		
};
int main(){
	Student student1("Inam Ul Haq",19,"BSSE","Bajaur","Khar","Kausar");
	student1.showStudent();
	return 0;
}