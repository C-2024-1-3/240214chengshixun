#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
    int size3 = size1 + size2; // list3的长度
    for (int i = 0; i < size3; i++) // 对list3赋值
    {
        if (i < size1) // 如果i小于list1的长度，将list1中的数值依次赋给list3
        {
            list3[i] = list1[i];// i超出了list1的长度，将list2中的数值依次赋给list3
        }
        else 
        {
            list3[i] = list2[i - size1]; // 从list2[0]开始赋值
        }
    }
    for (int i = 0; i < size3 - 1; i++) // 冒泡排序
    {
        for (int j = 0; j < size3 - i - 1; j++)
        {
            if (list3[j] > list3[j + 1])
            {
                int temp;
                temp = list3[j];
                list3[j] = list3[j + 1];
                list3[j + 1] = temp;
            }
        }
    }
    cout << "合并后排序的数组是:";
    for (int i = 0; i < size3; i++)
    {
        cout << list3[i] << ' '; // 输出合并后的结果
    }
    cout << endl;
}
int main()
{
    int size1, size2; // 定义数组长度
    cout << "请输入list1的长度:";
    cin >> size1; // 输入size1
    int* list1 = new int[size1]; // 使用new 用常量赋值数组大小
    cout << "请输入list1的数值:"; // 提示输入list1数值
    for (int i = 0; i < size1; i++) // 建立循环
    {
        cin >> list1[i]; // 输入数值
    }
    cout << "请输入list2的长度:";
    cin >> size2; // 输入size2
    int* list2 = new int[size2]; // 使用new 用常量赋值数组大小
    cout << "请输入list2的数值:"; // 提示输入list2数值
    for (int i = 0; i < size2; i++) // 建立循环
    {
        cin >> list2[i]; // 输入数值
    }
    int* list3 = new int[size1 + size2]; // 使用new 定义数组list3
    merge(list1, size1, list2, size2, list3); // 调用函数
    delete[] list1; // 释放list1内存
    delete[] list2; // 释放list2内存
    delete[] list3; // 释放list3内存
    return 0;
}
