// main.cpp
#include <iostream> // ��������ͷ�ļ���������
#include "student.h"
int main() 
{
    Student stud; // �������
    stud.set_value(007, "tcg", 'm'); // ����ѧ����Ϣ
    stud.display(); // ִ��stud�����display����
    return 0;
}
