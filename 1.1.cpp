#include<iostream>
using namespace std;
int main()
{
	int k = 1; //对k的初始定义
	int i = k;
	//Int i = k + 1;  错误：int要小写，而且k没有初始定义
	cout << i++ << endl;//先输出i，i再+1
	//int i = 1;  错误：i重复定义
	cout << i++ << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}