//student.h
#define STUDENT_H
class Student // 类声明
{ 
public: // 公用成员函数原型声明
    void display(); // 显示学生信息
    void set_value(int n, const char* nm, char s); // 设置学生信息
private:
    int num; // 学号
    char name[20]; // 姓名
    char sex; // 性别
};