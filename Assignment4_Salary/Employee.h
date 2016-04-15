/*
Jameson Thies
Assignment 4
817647825
*/

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
using namespace std;

class Employee
{
	public:
		//constructors
		Employee();
		Employee(string n, int i, char t);
		//modifiers
		void SetName(string n);
		void SetId(int i);
		void SetType(char t);
		//accessors
		string GetName();
		int GetId();
		char GetType();
	
		virtual int GetSalary(int profit);
		virtual void display(ostream & out) const;
	private:
		string name;
		int id;
		char type;
};

//Here i overload the operator
inline ostream & operator <<(ostream & out, const Employee & e){
	e.display(out);
	return out;
};

#endif
