//student.h
#define STUDENT_H
class Student // ������
{ 
public: // ���ó�Ա����ԭ������
    void display(); // ��ʾѧ����Ϣ
    void set_value(int n, const char* nm, char s); // ����ѧ����Ϣ
private:
    int num; // ѧ��
    char name[20]; // ����
    char sex; // �Ա�
};