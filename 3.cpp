#include<iostream>
#include<string>

using namespace std;

class Car{
	int yearModel;
	string make;
	int speed;
	
public:
	Car(int yearModel, string make, int speed){
		this-> yearModel= yearModel;
		this->make= make;
		this->speed= speed;
	}
	
	int getYear(){
		return yearModel;
	}
	
	string getmake(){
		return make;
	}
	
	int getSpeed(){
		return speed;
	}
	
	int accel(){
		this->speed += 5;
		return speed;
	}
	
	int brake(){
		this->speed -= 5;
		return speed;
	}
};

int main(){
	Car myCar(2015, "CHEAPASS", 100);
	cout<<"Model " <<myCar.getYear() <<endl 
	<<"Make "<<myCar.getmake() <<endl
	<<"Speed " <<myCar.getSpeed()<<endl;
	
	myCar.accel();
	cout<<"Acceled speed " <<myCar.getSpeed() <<endl;
	myCar.accel();
	cout<<"Acceled speed " <<myCar.getSpeed() <<endl;
	myCar.accel();
	cout<<"Acceled speed " <<myCar.getSpeed()<<endl;
	myCar.accel();
	cout<<"Acceled speed " <<myCar.getSpeed()<<endl;
	myCar.accel();
	cout<<"Acceled speed " <<myCar.getSpeed() <<endl;
	
	myCar.brake();
	cout<<endl <<"Braked speed " <<myCar.getSpeed();
	myCar.brake();
	cout<<endl <<"Braked speed " <<myCar.getSpeed();
	myCar.brake();
	cout<<endl <<"Braked speed " <<myCar.getSpeed();
	myCar.brake();
	cout<<endl <<"Braked speed " <<myCar.getSpeed();
	myCar.brake();
	cout<<endl <<"Braked speed " <<myCar.getSpeed();
	
	return 0;
}
