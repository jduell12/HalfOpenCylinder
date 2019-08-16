#include<iostream>
#include "Vase.hpp"

using std::cout;
using std::endl;

int main(){
    HalfOpenCylinder v1;
    Vase vase1(v1, 0.5);
    cout << "Vase1 costs: " << vase1.totalCost() << endl;

    HalfOpenCylinder v2(20, 5);
    Vase vase2(v2, 0.12);
    cout << "Vase2 costs: " << vase2.totalCost() << endl;

    HalfOpenCylinder v3(5, 1);
    Vase vase3(v3, 0.76);
    cout << "Vase3 costs: " << vase3.totalCost() << endl;

    cout << "Does vase1 cost more than vase2: " <<std::boolalpha << vase1.costsMoreThan(vase2) << endl;
    cout << "Does vase1 cost more than vase3: " <<std::boolalpha << vase1.costsMoreThan(vase3) << endl;
    cout << "Does vase2 cost more than vase1: " <<std::boolalpha << vase2.costsMoreThan(vase1) << endl;
    cout << "Does vase3 cost more than vase2: " <<std::boolalpha << vase3.costsMoreThan(vase2) << endl;

    return 0;
}
