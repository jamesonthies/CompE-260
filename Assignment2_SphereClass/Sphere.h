/*
Jameson Thies
Sphere Program
817647825
*/

#include <iostream>
using namespace std;
#ifndef SPHERE_H
#define SPHERE_H

// creating the class
class Sphere
{
  //functions
  public:
    Sphere();
    Sphere(double r);
	  void setRadius(double r);
	  double getRadius();
	  double getDiameter();
	  double getCircumfrence();
	  double getArea();
	  double getVolume();
  	friend ostream& operator<< (ostream &out, Sphere &sph);

  //variables
  private:
  	double radius;
};

#endif
