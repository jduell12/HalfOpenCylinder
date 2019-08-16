/******************************************************************************
 ** Date: July 24, 2019
 ** Description: HalfOpenCylinder class that has a constructor that takes 2
 ** double parameters and a default constructor. It has a method called
 ** surfaceArea which calculates the surface area of a cylinder that is open
 ** on one end and closed on the other.
 *****************************************************************************/
#include "HalfOpenCylinder.hpp"
#include <cmath>

/******************************************************************************
 **            HalfOpenCylinder::HalfOpenCylinder(double, double)
 ** Constructor for the class that takes two doubles and sets the height to
 ** the first double and sets the radius to the second double.
 *****************************************************************************/
HalfOpenCylinder::HalfOpenCylinder(double h, double r){
    height = h;
    radius = r;
}

/******************************************************************************
 **            HalfOpenCylinder::HalfOpenCylinder()
 ** Default constructor that sets the height to 10 and the radius to 2.
 *****************************************************************************/
HalfOpenCylinder::HalfOpenCylinder(){
    height = 10.0;
    radius = 2.0;
}

/******************************************************************************
 **            HalfOpenCylinder::surfaceArea()
 ** Function that returns the surface area in inches squares of a cylinder
 ** which is closed on one end and open on the other with a height and radius
 ** given.
 *****************************************************************************/
double HalfOpenCylinder::surfaceArea(){
    const double PI = 3.14159;
    double surfaceArea = (2 * PI * radius * height) + (PI * pow(radius, 2));
    return surfaceArea;
}
