#include<iostream>
#include<string>


using namespace std;

class Employee{
	string name;
	int idNum;
	string dept;
	string position;
	
public:
	employee(string name, int idNum, string dept, string position);
	employee(string name, int idNum);
	employee();
	void setName(string n);
	void setID(int id);
	void setDept(string d);
	void setPosition(string pos);
	void printEmp();
};

Employee::employee(string name, int idNum, string dept, string position){
	this->name= name;
	this->idNum= idNum;
	this->dept= dept;
	this->position= position;
}

Employee::employee(string name, int idNum){
		this->name= name;
		this->idNum= idNum;
		this->dept= "";
		this->position= "";
	};
	
Employee::employee(){
		this->name= "";
		this->idNum= 0;
		this->dept= "";
		this->position= "";
	}
	
void Employee::setName(string n){
	name = n;
}

void Employee::setID(int id){
	idNum = id;
}

void Employee::setDept(string d){
	dept = d;
}

void Employee::setPosition(string pos){
	position = pos;
}
	
void Employee::printEmp(){
	cout<<name <<" " <<idNum <<" " <<dept <<"  " <<position;
}

int main() {
	Employee emp1, emp2, emp3;
	emp1.employee("Susan Meyers", 47899, "Accounting", "Vice Pres");
	emp2.employee("Mark Jones", 39119, "IT", "Programmer");
	emp3.employee("Jolly Roger", 81774, "Manufacturing", "Engineer");
	
	emp1.printEmp();cout<<endl;
	emp2.printEmp();cout<<endl;
	emp3.printEmp();
	
	return 0;
}
