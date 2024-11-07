#include<iostream>
using namespace std;
int main()
{
	cout << "欢迎使用计算器!" << endl;//提示进入计算器程序
	cout << "请输入第一个值:" << endl;//提示输入值1
	double num1;//定义值1
	cin >> num1;//输入值1
	cout << "请选择你要进行的运算" << endl;//提示选择进行的运算
	cout << "1.加法运算" << endl;
	cout << "2.减法运算" << endl;
	cout << "3.乘法运算" << endl;
	cout << "4.除法运算" << endl;
	cout << "5.取余运算" << endl;
	int select;//定义选择值
	cin >> select;//输入选择值
	cout << "请输入第二个值:" << endl;//提示输入值2
	double num2;//定义值2
	cin >> num2;//输入值2
	switch (select)//判断选择值
	{
	case 1://1 执行加法运算
		cout << "两数之和为" << (num1 + num2) << endl;//输出加法结果
		break;
	case 2://2 执行减法运算
		cout << "两数之差为" << (num1 - num2) << endl;//输出减法结果
		break;
	case 3://3 执行乘法运算
		cout << "两数之积为" << (num1 * num2) << endl;//输出乘法结果
		break;
	case 4://4 执行除法运算
		if (num2 == 0)//判断除数是否为0
		{
			//如果除数为0
			cout << "除数不能为0" << endl;//提示除数不能为0
			break;
		}
		else//除数不为0
		{
			cout << "两数之商为" << (num1 / num2) << endl;//输出除法结果
			break;
		}
	case 5://5 执行取余运算
		if (num2 == 0)//判断取余数是否为0
		{
			//如果取余数为0
			cout << "除数不能为0" << endl;//提示取余数不能为0
			break;
		}
		else//取余数不为0
		{
			cout << "两数取余结果为" << (int(num1) % int(num2)) << endl;//输出取余结果
			break;
		}
	default:
		cout << "请选择合法运算" << endl;//选择的运算不合法 提示选择合法运算
	}
	return 0;
}
