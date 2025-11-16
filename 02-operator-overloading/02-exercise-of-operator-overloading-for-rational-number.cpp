// Titile: Addition of Rational Number
// Author: Inam Ul Haq
// Description:
//   This program demonstrates operator overloading for Rational Numbers.
//   We overload the + operator to add two rational numbers and
//   the << operator to display them in "p/q" format.


#include <iostream>
class RationalNumber{
	private:
		int p;
		int q;
	public:
		RationalNumber(int p=0,int q=1):p(p){
			setQ(q);
		}
		void setP(int p){
			this->p=p;
		}
		void setQ(int q){
			if(q==0){
				std::cerr<<"Denomerator can't be zero."<<std::endl;
				this->q=1;
				return;
			}
			else{
				this->q=q;
			}
		}
		inline int getP()const{
			return p;
		}
		inline int getQ()const{
			return q;
		}
		friend RationalNumber operator+(const RationalNumber &r1,const RationalNumber &r2);
		friend std::ostream& operator<<(std::ostream &out,const RationalNumber &r);
};
RationalNumber operator+(const RationalNumber &r1,const RationalNumber &r2){
	int num = r1.p * r2.q + r2.p * r1.q; 
    int den = r1.q * r2.q;
	return RationalNumber(num,den);
}
std::ostream& operator<<(std::ostream &out,const RationalNumber &r){
	out<<r.p<<"/"<<r.q;
	return out;
}


int main(){
	RationalNumber r1(2,4),r2(4,5);
	std::cout<<r1+r2<<std::endl;
	return 0;
}