/*
Jameson Thies
Assignment 4
817647825
*/

#include <iostream>
#include "string"
#include "Employee.h"
#include "Chef.h"
#include "Waiter.h"
#include "Employee.cpp"
#include "Chef.cpp"
#include "Waiter.cpp"
using namespace std;

//Driver function
int main(int argc, char** argv) {
	
	//creating employees
	Employee owner("Owner Name", 1, 'O');
	Chef chefOne("Chef One", 2,' C', "Italian");
	Chef chefTwo("Chef Two", 3,' C', "French");
	Waiter waiterOne("Waiter One", 4, 'W', 3);
	Waiter waiterTwo("Waiter Two", 5, 'W', 5 );
	Waiter waiterThree("Waiter Three", 6, 'W', 7);
	
	//setting profit and creating array of pointers
	int profit = 6000;
	Employee* employees[6] = {&owner, &chefOne, &chefTwo, &waiterOne, &waiterTwo, &waiterThree};
	
	//displaying peices of data
	cout << owner << "Salary: " << owner.GetSalary(profit) << endl << endl;
	cout << chefOne << "Salary: " << chefOne.GetSalary(profit) << endl << endl;
	cout << chefTwo << "Salary: " << chefTwo.GetSalary(profit) << endl << endl;
	cout << waiterOne << "Salary: " << waiterOne.GetSalary(1000) << endl << endl;
	cout << waiterTwo << "Salary: " << waiterTwo.GetSalary(1500) << endl << endl;
	cout << waiterThree << "Salary: " << waiterThree.GetSalary(1700) << endl << endl;
	return 0;
}
