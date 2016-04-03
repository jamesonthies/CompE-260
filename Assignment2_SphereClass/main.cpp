/*
Jameson Thies
Sphere Program
817647825
*/

#include <iostream>
#include "Sphere.h"
using namespace std;

//driver function
int main()
{
    cout<<"Enter a radius for sphere/circle attributes: ";
    double input;
    cin >> input;
    cout << endl;

    //create a spheres
    Sphere UserSphere(input);
    Sphere DefaultSphere;

    //print spheres
    cout<< "Default Sphere" << endl << DefaultSphere << endl << endl;
	  cout<< "User Sphere"<< endl << UserSphere << endl;
	return 0;
}
