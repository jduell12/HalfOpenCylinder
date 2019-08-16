/******************************************************************************
 ** Date: July 24, 2019
 ** Description: Vase class that has 2 data members, HalfOpenCylinder and
 ** double costPerSqaureInch. It has a constructor that takes two parameters
 ** and initializes the data members. It has a method that returns the total
 ** cost of the vase. It has a method that returns true if the vase the
 ** method is called on it more than the vase passed as an argument. 
 *****************************************************************************/
#include "Vase.hpp"

/******************************************************************************
 **               Vase::Vase(HalfOpenCylinder, double)
 ** Constructor that takes two parameters and initializes the classes data
 ** members.
 *****************************************************************************/
Vase::Vase(HalfOpenCylinder v, double cost){
    vase = v;
    costPerSquareInch = cost;
}

/******************************************************************************
 **                          Vase::totalCost()
 ** Function that returns the surface area multiplied by the cost per square
 ** inch.
 *****************************************************************************/
double Vase::totalCost(){
    double cost;
    cost = vase.surfaceArea() * costPerSquareInch;
    return cost;
}

/******************************************************************************
 **                    Vase::costsMoreThan(Vase)
 ** Function that returns true if the vase the method is called on is more
 ** than the vase passed as the parameter. Otherwise it returns false
 *****************************************************************************/
bool Vase::costsMoreThan(Vase v){
    bool more = false;
    if (totalCost() > v.totalCost()){
        more = true;
    } else {
        more = false;
    }
    return more;
}
