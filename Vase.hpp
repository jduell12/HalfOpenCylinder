/******************************************************************************
 ** Date: July 24, 2019
 ** Description: Vase class specification file
 *****************************************************************************/

#ifndef Vase_hpp
#define Vase_hpp

#include "HalfOpenCylinder.hpp"

class Vase{
private:
    HalfOpenCylinder vase;
    double costPerSquareInch;
public:
    Vase(HalfOpenCylinder, double);
    Vase();
    double totalCost();
    bool costsMoreThan(Vase);
};


#endif
