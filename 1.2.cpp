#include <iostream>
using namespace std;
int main()
{
    const double pai = 3.14;//定义π的取值
    double r, h;  //定义半径和高
    cout << "请输入半径" << endl;
    cin >>r ;//输入半径
    cout<< "请输入锥高" << endl;
    cin >> h;  //输入锥高
    cout << "该圆锥的体积是" << pai * h * r * r / 3 << endl;//圆锥体积公式为v=1/3π*r*r*h
    return 0;
}