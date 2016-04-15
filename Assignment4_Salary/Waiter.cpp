#include "Waiter.h"
#include <string>
using namespace std;

Waiter::Waiter(){
	Employee();
	SetYears(0);
}
Waiter::Waiter(string n, int i, char t, int y){
	Employee(n, i, t);
	SetYears(y);
	SetName(n);
	SetId(i);
	SetType(t);
}
void Waiter::SetYears(int y){
	years = y;
}

int Waiter::GetYears(){
	return years;
}

void Waiter::display(ostream & out) const{
	Employee::display(out);
	out << "Years: " << years << endl;
}

int Waiter::GetSalary(int tips){
	int salary = 3000 + tips;
	return salary;
}
