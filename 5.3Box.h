// Box.h
#define BOX_H
class Box 
{
public:
    void setDimensions(double l, double w, double h);  // 设置长方柱的长、宽、高
    double getVolume() const;  // 计算体积
    void displayVolume() const;  // 输出体积
private:
    double length;  // 长
    double width;   // 宽
    double height;  // 高
};