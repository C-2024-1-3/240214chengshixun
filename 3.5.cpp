#include<iostream>
using namespace std;
int peaches(int day) 
{
    if (day == 10) 
    {
        return 1;// 第10天只剩下1个桃子
    }
    else 
    {
        return (peaches(day + 1) + 1) * 2;// 根据递推公式，计算第day-1天的桃子数
    }
}
int main()
{
	int n = 1;
	cout << "第一天摘的桃子数为" << peaches(n) << endl;
	return 0;
}
