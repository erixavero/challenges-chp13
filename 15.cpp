#include<iostream>
#include<cmath>

using namespace std;

class Mortgage{
	
	double loan;
	double rate;
	float years;
	float term;
	
public:
	
	Mortgage() {
		loan= 0;
		rate= 0;
		years= 0;
	}
	
	Mortgage(double loan, double rate, int years){
		if(loan<0 || rate<0 || years<0){
			cout<<"INPUT ERROR"; exit(0);
		}
		else{
		this->loan= loan;
		this->rate= rate;
		this->years= years;
		}
	}
	
	float getTerm(){
		this->term= pow(1 + this->rate/12 , 12* this->years);
		return term;
	}
	
	double getPayment(){
		return this->loan * (this->rate /12) * this->term / (this->term -1);
	}
	
};

int main(){
	
	Mortgage myFee(1000, 8, 2);
	cout<<"Term: $ " <<myFee.getTerm() <<endl;
	cout<<"Payment: $ " <<myFee.getPayment();
	
	return 0;
}
