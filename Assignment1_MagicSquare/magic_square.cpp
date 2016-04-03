/*
Jameson Thies
Magic Square
817647825
*/
#include <iostream>
using namespace std;

//A funtion to determine if the user given valie is odd, and therefore if the program can make a magic square of it.
int IsOdd(int num){
	if((num%2) == 0){
		return 0;
	}else{
		return 1;
	}
}

int main(int argc, char** argv) {
	//Prompt User for size of square with a do while loop, using IsOdd to confirm the inputs validity
	int userNum;
		do{
			cout<< "Enter an odd number:";
			cin>> userNum;
			cout<< endl;
		}while(IsOdd(userNum) == false);

	//Create square of size userNum*userNum
	int** magicSquare = new int* [userNum];
	for(int i = 0; i < userNum; i++){
		magicSquare[i] = new int[userNum];
	}

	//Initialize the square to zero
	for(int j = 0; j < userNum; j++){
		for(int i = 0; i < userNum; i ++){
			magicSquare[j][i] = 0;
		}
	}

	//initialize the variables used.
	int row = userNum-1;
	int col = (userNum/2);
	int n = 1;

	//I use a while loop here to go through every number from one to the input^2, finding where in the magic square it should go
	while(n <= userNum * userNum){

		//To check wether a space sould be filled, i compare it with its default(zero)
		if (magicSquare[row][col] == 0){
		magicSquare[row][col] = n;
		}else{

			//If it isnt zero, it must be movesd two spots up, and on spot to the left. This is to both cancle out the standerd movement, and to move the way it should if the spot had been previously filled.
			if (row < 0){
				row = userNum - 1;
			}
			row--;
			if (row < 0){
				row = userNum - 1;
			}
			row--;
			col--;
			magicSquare[row][col] = n;

		}

		// The if in this if statement accounts for when the row, col combination is in the bottom right, and adjust it accordingly so that it can successfully go to the next position.
		if( row == (userNum - 1) && col == (userNum - 1)){
			row--;
		}else{

			// Here, the row col, wasnt the bottom right. Therefore, it iterates down and to the right, accounting for reaching a boundary
			if(row < userNum-1){
				row++;
			}else{
				row = 0;
			}
			if(col < userNum - 1){
				col++;
			}else{
			col = 0;
			}
		}

		//iterayes n so it will put the next number in the next spot
		n++;
	}



	// This for loop prints out the magic square. The first loop is for row, the second is for cols
	for(int s = 0; s< userNum ; s ++){
		for(int y = 0; y < userNum; y++){

			//This series of if statements prints a certian amount of space based on how many digits are in magicSquare[row][col]
			if (magicSquare[s][y] < 10){
			cout<<"   ";
			}else if(magicSquare[s][y]< 100){
			cout<<"  ";
			}else{
			cout<< " ";
			}

			//Prints the actual value
			cout<< magicSquare[s][y];
		}

		//iterates through rows
		cout<<endl;
	}

}
