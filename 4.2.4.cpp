#include<iostream>
using namespace std;
int* f() 
{
    return new int[4] {1, 2, 3, 4};// 使用new动态分配内存
}
int main() 
{ 
    int* p = f();
    cout << p[0] << endl;
    cout << p[1] << endl;
    delete[] p;// 使用delete[]释放内存
    return 0;
}