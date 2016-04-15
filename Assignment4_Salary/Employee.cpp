#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;

Employee::Employee(){
	SetName("None");
	SetId(0);
	SetType('N');
}

Employee::Employee(string n, int i, char t){
	SetName(n);
	SetId(i);
	SetType(t);
}

void Employee::SetName(string n){
	name = n;
}
 
void Employee::SetId(int i){
	id = i;
}

void Employee::SetType(char t){
	type = t;
}

string Employee::GetName(){
	return name;
}

int Employee::GetId(){
	return id;
}

char Employee::GetType(){
	return type;
}

void Employee::display(ostream & out)const{
	out << "Name: " << name << endl
	<< "Id: " << id << endl
	<< "Type: " << type << endl;
}

int Employee::GetSalary(int profit){
	int salary = (profit*0.6)+15000;
	return salary;
}
