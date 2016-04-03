/*
Jameson Thies
Staque Assignment
817647825
*/
#include <iostream>
#include "Staque.h"
using namespace std;

ostream & operator<<(ostream & out, const Staque & s){
	s.display(out);
	return out;
}

Staque::Staque(){
	size = 0;
}

void Staque::display(ostream & out) const{
	for (int i = 0; i < size; i++){
		out<< array[i] << "  ";
	}	
	out<< endl;
}

//To insert new data I move all the date up one until reaching the destination, rhen i add the date to the array
void Staque::insert(int data, int pos){
	for(int i = size; i > pos; i--){
		array[i] = array[i - 1];
	}
	array[pos] = data;
	size++;
}

//to erase data I replace the data with the one to the right. This happens until it reaches the end, then the array is shortend by 1.
void Staque::erase(int pos){
	for(int i = pos; i < size; i++){
		array[i] = array[i + 1];
	}
	size--;
} 

int Staque::getSize(){
	return size;
}

