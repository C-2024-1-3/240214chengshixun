//student.cpp
#include <iostream>
#include "student.h" // ��Ҫ©д���У��������ͨ����
using namespace std;
void Student::set_value(int n, const char* nm, char s) // ����set_value����
{ 
    num = n; // ����ѧ��
    strncpy_s(name, nm, sizeof(name) - 1); // ��������
    name[sizeof(name) - 1] = '\0'; // ȷ���ַ�����'\0'��β
    sex = s; // �����Ա�
}
void Student::display()// �����ⶨ��display�ຯ��
{ 
    cout << "num: " << num << endl;
    cout << "name: " << name << endl;
    cout << "sex: " << sex << endl;
}
