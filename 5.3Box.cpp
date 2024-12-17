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
    return length * width * height;  // ������㹫ʽ���� �� �� �� ��
}
void Box::displayVolume() const 
{
   cout << getVolume() << endl;  // ������
}