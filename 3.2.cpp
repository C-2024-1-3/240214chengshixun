#include<iostream>
using namespace std;
bool is_prime(int num)//定义判断素数的函数
{
	int j = 0;//定义j=0
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			j++;//每有一个因数,j就+1
		}
	}
	if (j == 2)//如果j=2,即num只有两个因数,就是素数,返回true
	{
		return true;
	}
	else 
	{
		return false;
	}
}
int main()
{
	bool prime;//定义prime用于接收函数返回值
	int n = 1;//定义n用来枚举
	for (int j = 0; ;)
	{
		n++;//n+1(从2开始枚举)
		prime = is_prime(n);//接收函数返回值
		if (prime == true)//如果是素数
		{
			cout << n << ' ';//输出该数字
			j++;//计数+1
			if (j % 10 == 0)//如果已经输出了10个数字
			{
				cout << endl;//换行
			}
		}
		if (j == 200)//如果输出了200个数字
		{
			break;
		}
	}
	return 0;
}