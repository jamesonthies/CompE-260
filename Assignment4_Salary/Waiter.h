/*
Jameson Thies
Assignment 4
817647825
*/

#ifndef WAITER_H
#define WAITER_H

#include <iostream>
#include <string>
using namespace std;
#include "Employee.h"

class Waiter : public Employee
{
	public:
		//constructors
		Waiter();
		Waiter(string n, int i, char t, int y);
		//modifier
		void SetYears(int y);
		//accessor
		int GetYears();
		
		virtual void display(ostream & out) const;
		virtual int GetSalary(int tips);
	private:
		int years;
};

#endif
