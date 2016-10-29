#include<iostream>
#include<string>

using namespace std;

class Date{
	int day= 1;
	int month= 1;
	int year= 1970;
	
	string monthName[12]= {"JAN", "FEB", "MAR", "APR", "MAY", "JUN",
	"JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
	
public:
	date(int day, int month, int year);
	void printFirstForm();
	void printSecondForm();
	void printThirdForm();
};

	Date::date(int day, int month, int year){
		this->day = day;
		this->month = month;
		this->year = year; 
	}

	void Date::printFirstForm() {
	cout<<month <<" / " <<day <<" / " <<year;
}

	void Date::printSecondForm(){
		cout<<monthName[month-1] <<" " <<day <<", " <<year;
	}
	
	void Date::printThirdForm(){
		cout<<day <<" " <<monthName[month-1] <<" " <<year;
	}

int main() {
	
	Date newDate;
	newDate.date(23, 6, 2006);
	newDate.printFirstForm();
	cout<<endl;
	newDate.printSecondForm();
	cout<<endl;
	newDate.printThirdForm();
	
	return 0;
}
