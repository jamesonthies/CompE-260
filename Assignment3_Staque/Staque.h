/*
Jameson Thies
Staque Assignment
817647825
*/

#include <iostream>
using namespace std;
#ifndef STAQUE_H
#define STAQUE_H

//I set the capacity to 255 arbitrarily
const int CAPACITY = 255;

class Staque{
	public: 
		//constructor
		Staque();
		
		//modifiers
		void insert(int data, int pos);
		void erase(int pos);
		
		//display function
		void display(ostream & out) const;
		
		//accessor
		int getSize();
	private: 
		//amount of items in the array
		int size;
		
		//the array filled with data pieces
		int array[CAPACITY];
};

//prototype for operator overload
ostream & operator<<(ostream & out, const Staque & s);
#endif
