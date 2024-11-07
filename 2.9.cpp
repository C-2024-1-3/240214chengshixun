#include<iostream>
using namespace std;
int main()
{
	int num, sum, day;
	day = 0;//天数
	sum = 0;//总苹果数
	for (int i = 2;i <= 100;i *= 2)//循环条件
	{
		num = i;//当天买的苹果数
		sum = sum + num;//总苹果数=原先苹果树+当天苹果数
		day++;
	}
	double average = 0.8 * sum / day;//每天平均花多少钱
	cout << "每天平均花"<< average<<"元" << endl;//输出每天平均花多少钱
	return 0;
}