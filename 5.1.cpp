#include <iostream>
using namespace std;
class Time // 定义Time类
{ 
private: // 数据成员为私有的
    int hour;
    int minute;
    int sec;
public: // 公有成员函数
    void inputTime() // 输入时间的成员函数
    { 
        cout << "请输入时间（小时 分钟 秒）: ";
        cin >> hour >> minute >> sec;
    }
    void displayTime() // 输出时间的成员函数
    { 
        cout << hour << "：" << minute << "：" << sec << endl;
    }
};
int main() 
{
    Time t1; // 定义t1为Time类对象
    t1.inputTime(); // 调用成员函数输入时间
    t1.displayTime(); // 调用成员函数输出时间
    return 0;
}