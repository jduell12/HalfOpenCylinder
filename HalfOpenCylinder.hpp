/******************************************************************************
 ** Date: July 24, 2019
 ** Description: HalfOpenCylinder class specification file
 *****************************************************************************/
#ifndef HalfOpenCylinder_hpp
#define HalfOpenCylinder_hpp

class HalfOpenCylinder {
private:
    double height;
    double radius;
public:
    HalfOpenCylinder(double, double);
    HalfOpenCylinder();
    double surfaceArea();

};


#endif
