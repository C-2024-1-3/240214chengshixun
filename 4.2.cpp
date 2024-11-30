#include<iostream>
using namespace std;
void bubbleSort(int* arr, int len)//定义冒泡排序函数
{
	for (int i = 0; i < len - 1; i++)//比较轮数:比较一次 可以比出 一个最大值 要将10个数排序 仅需比出9次
	{
		for (int j = 0; j < len - 1 - i; j++)//每次比较的回数为len-i-1
		{
			if (arr[j] > arr[j + 1])//如果前一项大于后一项 调换前后两项
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main()//主程序
{
	int arr1[10];//定义数组
	cout << "请输入数组的数值" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr1[i];//输入数组中的各元素
	}
	int num = (sizeof(arr1) / sizeof(arr1[0]));//计算数组长度
	bubbleSort(arr1, num);//调用函数
	cout << "排序后的数组为" << endl;//提示排序结果
	for (int i = 0; i < num; i++)
	{
		cout << arr1[i] << ' ';//输出数组
	}
	return 0;
}