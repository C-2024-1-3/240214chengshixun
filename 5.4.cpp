#include <iostream>
using namespace std;
// Student 类定义
class Student 
{
public:
    void setData(int id, double score);  // 设置学生的学号和成绩
    int getId() const;  // 获取学生的学号
    double getScore() const;  // 获取学生的成绩
private:
    int id;  // 学号
    double score;  // 成绩
};
// 实现 Student 类的成员函数
void Student::setData(int id, double score) 
{
    this->id = id;
    this->score = score;
}
int Student::getId() const 
{
    return id;
}
double Student::getScore() const 
{
    return score;
}
void max(Student* students, int n) // max 函数，用指向学生对象的指针作为参数，找出成绩最高的学生
{
    Student* maxStudent = &students[0];  // 假设第一个学生是成绩最高的
    for (int i = 1; i < n; ++i) 
    {
        if (students[i].getScore() > maxStudent->getScore()) 
        {
            maxStudent = &students[i];  // 找到成绩更高的学生
        }
    }
    cout << "成绩最高的学生是: " << maxStudent->getId() << endl;
}
int main() 
{
    Student students[5];  // 创建一个包含5个学生的数组
    int id;
    double score;
    for (int i = 0; i < 5; ++i) // 输入5个学生的学号和成绩
    {
        cout << "输入5个学生的学号和成绩： " << i + 1 << ": ";
        cin >> id >> score;
        students[i].setData(id, score);
    }
    // 找出成绩最高的学生并输出其学号
    max(students, 5);
    return 0;
}