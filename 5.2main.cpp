// main.cpp
#include <iostream> // 将类声明头文件包含进来
#include "student.h"
int main() 
{
    Student stud; // 定义对象
    stud.set_value(007, "tcg", 'm'); // 设置学生信息
    stud.display(); // 执行stud对象的display函数
    return 0;
}
