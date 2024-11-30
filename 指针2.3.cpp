#include <iostream>
using namespace std;
void sortArray(int* arr, int size) // 排序函数实现（简单选择排序）
{
    for (int i = 0; i < size - 1; ++i) 
    {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) 
        {
            if (arr[j] < arr[minIndex]) 
            {
                minIndex = j;
            }
        }
        if (minIndex != i) // 交换元素
        {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}
int main() 
{
    int size;
    cout << "请输入数组的元素个数: ";
    cin >> size; // 用户输入数组的大小
    int* arr = new int[size];// 使用new动态分配数组
    cout << "请输入 " << size << " 个数组元素:" << endl;
    for (int i = 0; i < size; ++i) 
    {
        cin >> arr[i]; // 用户输入数组元素
    }
    cout << "原始数组内容：" << endl;// 打印数组原始内容
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    sortArray(arr, size);
    cout << "排序后的数组内容：" << endl;
    for (int i = 0; i < size; ++i) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;// 释放数组内存
    return 0;
}