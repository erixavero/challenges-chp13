#include<iostream>
#include<string>

using namespace std;

class Biodata{
	string name;
	string address;
	int age;
	string phone;
	
public:
	Biodata(string name, string address, int age, string phone){
		this->name = name;
		this->address = address;
		this->age = age;
		this->phone = phone;
	}
	
	string getName(){
		return name;
	}
	
	string getAddress(){
		return address;
	}
	
	int getAge(){
		return age;
	}
	
	string getPhone(){
		return phone;
	}
};

int main(){
	
	Biodata mine("Eric", "BloodBorne St.", 22, "08798121233");
	cout<<"Name: " <<mine.getName() <<endl
		<<"Address: " <<mine.getAddress() <<endl
		<<"Age: " <<mine.getAge() <<endl
		<<"Phone: " <<mine.getPhone() <<endl <<endl;
		
	Biodata friend1("John", "Shadow Realm", 12, "06669996660"); 
	cout<<"Name: " <<friend1.getName() <<endl
		<<"Address: " <<friend1.getAddress() <<endl
		<<"Age: " <<friend1.getAge() <<endl
		<<"Phone: " <<friend1.getPhone() <<endl <<endl;
		
	Biodata friend2("Lila", "Butter Crack", 1080, "08008717455"); 
	cout<<"Name: " <<friend2.getName() <<endl
		<<"Address: " <<friend2.getAddress() <<endl
		<<"Age: " <<friend2.getAge() <<endl
		<<"Phone: " <<friend2.getPhone();
		
	return 0;
}
