#include <iostream>
#include <cctype> // for isalpha, isdigit, isspace
using namespace std;
int main() {
    char c;
    int letterCount = 0; // 统计字母个数
    int spaceCount = 0;  // 统计空格个数
    int digitCount = 0;  // 统计数字个数
    int otherCount = 0;  // 统计其他字符个数
    cout << "请输入一行字符（按 Enter 结束）：\n";
    // 使用 cin.get() 逐个读取字符
    while (true) {
        c = cin.get(); // 读取一个字符
        // 检查是否是换行符
        if (c == '\n') 
        {
            break; // 如果是换行符则结束循环
        }
        // 判断字符类型并进行计数
        if (isalpha(c)) 
        {
            letterCount++; // 英文字母
        }
        else if (isspace(c)) 
        {
            spaceCount++; // 空格
        }
        else if (isdigit(c)) 
        {
            digitCount++; // 数字
        }
        else 
        {
            otherCount++; // 其他字符
        }
    }
    // 输出结果
    cout << "英文字母个数: " << letterCount << endl;
    cout << "空格个数: " << spaceCount << endl;
    cout << "数字字符个数: " << digitCount << endl;
    cout << "其他字符个数: " << otherCount << endl;
    return 0;
}
