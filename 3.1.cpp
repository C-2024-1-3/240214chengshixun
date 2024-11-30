#include<iostream>
using namespace std;
int ys(int& m, int& n)//定义最大公因数函数
{
    int Y;//定义最大公因数Y
    for (int i = 1;i <= m && i <= n;i++)
    {
        if (m % i == 0 && n % i == 0)
        {
            Y = i;//将目前最大的i覆盖赋值到临时变量Y
        }
    }
    return Y;//返回最大公因数Y
}
int bs(int& m, int& n)//定义最小公倍数函数
{
    int temp;//定义临时变量
    for (int i = m; i <= (m * n); i++)
    {
        if (i % m == 0 && i % n == 0)//i分别取余a,b,如果结果为0 就是a,b的公倍数
        {
            temp = i;//将公倍数赋值到临时变量
            break;//找到的第一个公倍数就是最小公倍数 跳出循环
        }
    }
    return temp;//返回临时变量
}

int main()
{
    int m, n;//定义m,n
    cout << "请输入m的值:";//提示输入m的值
    cin >> m;//输入m
    cout << "请输入n的值:";//提示输入n的值
    cin >> n;//输入n
    cout << "最大公约数为" << ys(m, n) << endl;
    cout << "最小公倍数为" << bs(m, n) << endl;
    return 0;
}


