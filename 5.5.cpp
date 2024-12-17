#include <iostream>
using namespace std;
class Point 
{
private:
    int x, y;  // 私有成员变量 x 和 y，表示坐标
public:
    Point() // 构造函数，初始化坐标为 (60, 80) 
    {
        x = 60;
        y = 80;
    }
    void setPoint(int i, int j) // 公有成员函数，修改坐标值
    {
        x = 60 + i;
        y = 80 + j;
    }
    void display() const // 公有成员函数，显示当前坐标
    {
        cout << "当前坐标为: (" << x << ", " << y << ")" << endl;
    }
};
int main() 
{
    Point p1; // 创建 Point 类的对象，自动调用构造函数，将坐标初始化为 (60, 80)
    cout << "初始坐标为： "; // 输出初始坐标
    p1.display();
    int i, j;// 用户输入要修改的坐标偏移量
    cout << "输入要修改的x坐标偏移量: ";
    cin >> i;
    cout << "输入要修改的y坐标偏移量: ";
    cin >> j;
    p1.setPoint(i, j); // 修改坐标值，调用 setPoint 函数
    cout << "修改后的坐标为: ";
    p1.display();
    return 0;
}