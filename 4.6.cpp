#include <iostream>
using namespace std;
void count(const char s[], int counts[]) {
    while (*s)  // 遍历字符串直到遇到空字符
    {
        char ch = *s;
        if (ch >= 'A' && ch <= 'Z') // 如果字符是大写字母
        {
            ch += 'a' - 'A'; // 转换为小写字母
        }
        if (ch >= 'a' && ch <= 'z') // 如果字符是小写字母
        { 
            counts[ch - 'a']++; // 对应字母的计数增加
        }
        s++; // 移动到下一个字符
    }
}
int main() {
    const int SIZE = 26; // 字母的数量
    int counts[SIZE] = { 0 }; // 初始化计数数组
    char input[1000]; // 假设输入的字符串不超过999个字符
    cout << "Enter a string: ";
    cin.getline(input, 1000); // 读入字符串
    count(input, counts); // 调用count函数
    // 显示每个字母出现的次数
    for (int i = 0; i < SIZE; i++) {
        if (counts[i] > 0) // 如果次数非零
        { 
            cout << char('a' + i) << ": " << counts[i] << " times" << endl;
        }
    }
    return 0;
}