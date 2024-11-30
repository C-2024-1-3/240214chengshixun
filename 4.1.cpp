#include <iostream>
using namespace std;
bool contains(int arr[], int size, int value) //定义一个contains函数
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value) //如果存在相同数，它返回false
        {
            return false;
        }
    }
    return true;//如果不存在相同数，它返回true
}
int main() {
    int numbers[10]; // 存储输入的数
    int uniqueNumbers[20]; // 存储不同的数
    int uniqueCount = 0; // 不同数的计数
    cout << "请输入10个数：" << endl;
    for (int i = 0; i < 10; i++) 
    {
        cin >> numbers[i];
        if (contains(uniqueNumbers, uniqueCount, numbers[i])) //如果不存在相同数，元素+1
        {
            uniqueNumbers[uniqueCount++] = numbers[i];
        }
    }
    cout << "不同的数有：" << endl;
    for (int i = 0; i < uniqueCount; i++) 
    {
        cout << uniqueNumbers[i] << " ";//输出数组中的元素
    }
    cout << endl;
    return 0;
}