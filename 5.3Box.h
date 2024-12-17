// Box.h
#define BOX_H
class Box 
{
public:
    void setDimensions(double l, double w, double h);  // ���ó������ĳ�������
    double getVolume() const;  // �������
    void displayVolume() const;  // ������
private:
    double length;  // ��
    double width;   // ��
    double height;  // ��
};