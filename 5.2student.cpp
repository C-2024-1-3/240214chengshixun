//student.cpp
#include <iostream>
#include "student.h" // 不要漏写此行，否则编译通不过
using namespace std;
void Student::set_value(int n, const char* nm, char s) // 定义set_value函数
{ 
    num = n; // 设置学号
    strncpy_s(name, nm, sizeof(name) - 1); // 设置姓名
    name[sizeof(name) - 1] = '\0'; // 确保字符串以'\0'结尾
    sex = s; // 设置性别
}
void Student::display()// 在类外定义display类函数
{ 
    cout << "num: " << num << endl;
    cout << "name: " << name << endl;
    cout << "sex: " << sex << endl;
}
