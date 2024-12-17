// Box.cpp
#include <iostream>
#include "Box.h"
using namespace std;
void Box::setDimensions(double l, double w, double h) 
{
    length = l;
    width = w;
    height = h;
}
double Box::getVolume() const 
{
    return length * width * height;  // 体积计算公式：长 × 宽 × 高
}
void Box::displayVolume() const 
{
   cout << getVolume() << endl;  // 输出体积
}