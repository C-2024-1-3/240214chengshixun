#include <iostream>
#include <string>
#include <cstring> // 用于处理字符串函数
using namespace std;
int parseHex(const char* const hexString) // 函数实现
{
    if (hexString == nullptr || *hexString == '\0') 
    {
        cout << "Input is empty or null!" << endl;
        return -1; // 返回-1表示输入无效
    }

    int decimal = 0;
    int base = 1; // 16的0次方
    size_t length = strlen(hexString); // 获取字符串长度
    for (int i = length - 1; i >= 0; --i) 
    {
        char c = hexString[i];
        if (c >= '0' && c <= '9') 
        {
            decimal += (c - '0') * base;
        }
        else if (c >= 'A' && c <= 'F') 
        {
            decimal += (c - 'A' + 10) * base;
        }
        else if (c >= 'a' && c <= 'f') 
        {
            decimal += (c - 'a' + 10) * base;
        }
        else 
        {
            cout << "Invalid hexadecimal character: " << c << endl;
            return -1; // 返回-1表示输入无效
        }
        base *= 16; // 移动到下一个16进制位
    }
    return decimal;
}
int main() {
    string hexStr; // 用于存储用户输入的16进制字符串
    cout << "Enter a hexadecimal number: ";
    cin >> hexStr; // 从用户输入中读取16进制字符串
    int decimal = parseHex(hexStr.c_str()); // 调用parseHex函数
    if (decimal != -1) 
    {
        cout << "The decimal value of " << hexStr << " is " << decimal << endl;
    }
    else 
    {
        cout << "Invalid hexadecimal string: " << hexStr << endl;
    }

    return 0;
}