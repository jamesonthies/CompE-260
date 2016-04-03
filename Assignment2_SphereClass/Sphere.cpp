/*
Jameson Thies
Sphere Program
817647825
*/

#include <iostream>
#include "Sphere.h"
using namespace std;

//constructors
Sphere::Sphere(){
    setRadius(1);
}
Sphere::Sphere(double r){
	setRadius(r);
}

//Modifier
void Sphere::setRadius(double r){
	radius = r;
}

//Accessor functions
double Sphere::getRadius(){
	return radius;
}
double Sphere::getDiameter(){
	return radius*2;
}
double Sphere::getCircumfrence(){
	return (3.14*radius*2);
}
double Sphere::getArea(){
	return (3.14*radius*radius);
}
double Sphere::getVolume(){
	return 4.18666667*radius*radius*radius;
}

//operator overload function to print sphere.
ostream& operator<<(ostream &out, Sphere &sph){
	cout << "Radius: " << sph.getRadius() << endl
	<< "Diameter: " << sph.getDiameter() << endl
	<< "Circumfrence: " << sph.getCircumfrence() << endl
	<< "Area: " << sph.getArea() << endl
	<< "Volume: " << sph.getVolume() << endl;
	return cout;
}
