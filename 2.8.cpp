#include<iostream>
#include<cmath>//引入fabs所需头文件
using namespace std;
int main()
{
	double a, xn, xn1;//定义a xn xn+1
	cout << "请输入a的值:"<<endl;//提示输入a的值
	cin >> a;//输入a的值
	xn = a;//将a的值赋给x
	if (a >= 0)//如果a大于等于0 开方
	{
		for (;1;)
		{
			xn1 = 0.5 * (xn + (a / xn));//给xn+1赋值
			if (fabs(xn1 - xn) < 0.00001)//fabs为绝对值 如果满足条件
			{
				cout << "a的平方根为" << xn1;//输出当前xn+1(a的平方根)的值
				break;//退出循环
			}
			xn = xn1;//将此次xn+1的值赋给下次的xn
		}
	}
	else//如果a小于0
	{
		cout << "必须a>=0才能开方" << endl;//提示不能开方
	}
	return 0;
}