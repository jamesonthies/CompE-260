/*
Jameson Thies
Assignment 4
817647825
*/

#ifndef CHEF_H
#define CHEF_H

#include <iostream>
#include <string>
using namespace std;
#include "Employee.h"

class Chef : public Employee
{
	public:
		//constructors
		Chef();
		Chef(string n, int i, char t, string c);
		//modifiers
		void SetCuisine(string c);
		//accessor
		string GetCuisine();
		
		virtual void display(ostream & out) const;
		virtual int GetSalary(int profit);
	private:
		string cuisine;
};

#endif
