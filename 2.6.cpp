#include<iostream>
using namespace std;
int main()
{
    int a, b, m, n;//m是最大公约数，n是最小公倍数
    cout << "请输入a和b两个数" << endl;
    cin >> a >> b;//输入a和b
    for (int i = 1;i <= a && i <= b;i++)
    {
        if (a % i == 0 && b % i == 0) //求a和b的最大公约数
        { 
            m = i; 
        }
    }
    for (int i = 1;;i++)
    {
        if (i % a == 0 && i % b == 0)//求a和b的最小公倍数
        {
            n = i; 
            break;
        }
    }
    cout << a << "和" << b << "最大公约数" << m << endl;
    cout << a << "和" << b << "最小公倍数" << n << endl;
    return 0;
}

