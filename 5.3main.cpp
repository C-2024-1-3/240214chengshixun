// main.cpp
#include <iostream>
#include "Box.h"
using namespace std;
int main() 
{
    Box box1, box2, box3;  // ����3������������
    double length, width, height;
    cout << " �����һ���������ĳ������� :";
    cin >> length >> width >> height;
    box1.setDimensions(length, width, height);
    cout << "����ڶ����������ĳ������� :";
    cin >> length >> width >> height;
    box2.setDimensions(length, width, height);
    cout << "����������������ĳ�������: ";
    cin >> length >> width >> height;
    box3.setDimensions(length, width, height);
    // ���3�������������
    cout << "3������������������ǣ�" << endl;
    box1.displayVolume();
    box2.displayVolume();
    box3.displayVolume();
    return 0;
}