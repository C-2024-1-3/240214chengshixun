#include<iostream>
using namespace std;
void change_state(bool* arr, int num1) // 定义改变状态函数
{
	for (int i = num1 - 1; i < 100; i += num1) // 从第i项开始，步长为num1
	{
		arr[i] = !arr[i]; // 第i项取反
	}
}
int main()
{
	bool arr[100];//定义一个布尔类型的数组
	for (int i = 0; i < 100; i++)//第一个学生打开所有的存物柜，将数组的所有值赋为true(开)
	{
		arr[i] = true;
	}
	for (int i = 2; i <=100; i++)//从学生2到学生100改变状态
	{
		change_state(arr, i);//调用改变状态函数
	}
	cout << "开着的门有:" << endl;
	for (int i = 0; i < 100; i++)
	{
		if (arr[i] == true)//如果开着
		{
			cout << (i + 1) << ' ';//打印编号
		}
	}
	return 0;
}