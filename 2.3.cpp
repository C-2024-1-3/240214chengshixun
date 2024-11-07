#include<iostream>
using namespace std;
int main()
{
	int a, b, c, s;
	cout << "请输入三角形的三边" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)//构成三角形的条件
	{
		s = a + b + c;//求周长
		cout << "该三角形的周长为"<<s << endl;//输出周长
		if (a == b || a == c || b == c)//等腰三角形的条件
		{
			cout << "这是一个等腰三角形" << endl;
		}
		else
		{
			cout << "这不是一个等腰三角形" << endl;
		}
	}
	else
	{
		cout << "该三边不能构成三角形" << endl;
	}
	return 0;
}