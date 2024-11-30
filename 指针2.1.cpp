#include <iostream>
using namespace std;
int myStrlen(const char* str) // 计算字符串长度的函数
{
    int length = 0;
    while (str[length] != '\0') 
    {
        length++;
    }
    return length;
}
int indexof(const char* s1, const char* s2) // 函数实现
{
    int len1 = myStrlen(s1);
    int len2 = myStrlen(s2);
    if (len1 == 0 || len2 == 0 || len1 > len2) 
    {
        return -1; // 如果s1为空，s2为空，或者s1比s2长，则直接返回-1
    }
    for (int i = 0; i <= len2 - len1; ++i) 
    {
        bool match = true;
        for (int j = 0; j < len1; ++j) 
        {
            if (s2[i + j] != s1[j]) 
            {
                match = false;
                break; // 如果字符不匹配，跳出内层循环
            }
        }
        if (match) 
        {
            return i; // 如果找到匹配的子串，返回第一次匹配的下标
        }
    }
    return -1; // 如果没有找到匹配的子串，返回-1
}
int main() 
{
    char s1[100], s2[100]; // 假设字符串长度不超过99
    cout << "请输入字符串s1: ";
    cin.getline(s1, 100); // 使用getline读取字符串
    cout << "请输入字符串s2: ";
    cin.getline(s2, 100); 
    int result = indexof(s1, s2);
    if (result != -1) 
    {
        cout << "字符串s1是字符串s2的子串，第一次匹配的下标是: " << result << endl;
    }
    else 
    {
        cout << "字符串s1不是字符串s2的子串。" << endl;
    }
    return 0;
}