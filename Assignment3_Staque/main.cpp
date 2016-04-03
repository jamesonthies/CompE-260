/*
Jameson Thies
Staque Assignment
817647825
*/
#include <iostream>
#include "Staque.h"
using namespace std;

int main() {

	Staque myStaque;

	//here I prompt the user for numbers to put into the Staque, once zero is entered, the array is finished.
	cout<< "Enter Numbers to be put into the list. Enter 0 to stop." << endl;
	int userNum;
	do{
		cout << ">>";
		cin>> userNum;

		if (userNum != 0){
			if(userNum%2 == 0){
				myStaque.insert(userNum, 0);
			}else{
				myStaque.insert(userNum, myStaque.getSize());
			}
		}

	}while(userNum != 0);

	//I ask the user how many of numbers to delete from each side
	int evenNum, oddNum;
	cout<<myStaque;
	cout<< "Enter number of even and odd numbers to be deleted." << endl << "Even:";
	cin >> evenNum;
	cout << "Odd:";
	cin >> oddNum;

	for (int i = 0; i < evenNum; i++){
		myStaque.erase(0);
	}
	for (int i = 0; i < oddNum; i++){
		myStaque.erase(myStaque.getSize() - 1);
	}

	//Printing the final Staque.
	cout<< myStaque << endl;

	return 0;
}
