// main.cpp
#include <iostream>
#include "Box.h"
using namespace std;
int main() 
{
    Box box1, box2, box3;  // 创建3个长方柱对象
    double length, width, height;
    cout << " 输入第一个长方柱的长、宽、高 :";
    cin >> length >> width >> height;
    box1.setDimensions(length, width, height);
    cout << "输入第二个长方柱的长、宽、高 :";
    cin >> length >> width >> height;
    box2.setDimensions(length, width, height);
    cout << "输入第三个长方柱的长、宽、高: ";
    cin >> length >> width >> height;
    box3.setDimensions(length, width, height);
    // 输出3个长方柱的体积
    cout << "3个长方柱的体积依次是：" << endl;
    box1.displayVolume();
    box2.displayVolume();
    box3.displayVolume();
    return 0;
}