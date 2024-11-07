#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
    unsigned int testUnint = 65534; // 0xfffe
    cout << "output in unsigned int type: " << testUnint << endl;//<<oct
    // 输出字符类型
    cout << "output in char type:!" << static_cast<char>(testUnint) << endl;
    // 输出短整型类型
    cout << "output in short type: " << static_cast<short>(testUnint) << endl; // 结果为-2 原因：testUnint = 65534 在二进制中的表示是 11111111 11111110。
    //在 short 类型中，范围是 - 32768 到 32767，超出了范围的高位会被截断。由于补码表示，0xfffe 被解释为 - 2。
    // 输出整型类型
    cout << "output in int type: " << static_cast<int>(testUnint) << endl;
    // 输出双精度浮点型类型
    cout << "output in double type: " << static_cast<double>(testUnint) << endl;
    // 设置精度并输出
    cout << "output in double type with precision: " << setprecision(4) << static_cast<double>(testUnint) << endl;
    // 输出十六进制无符号整型类型
    cout << "output in Hex unsigned int type: " << hex << testUnint << endl; // 16进制输出
    cout << "output in Oct unsigned int type:" << oct << testUnint << endl;//八进制输出
    cout << "请输入一个实数" << endl;
    double m;//定义一个实数
    cin >> m;
    cout <<"转换为int后的值为" << static_cast<int>(m) << endl;//输出该实数转换为int后的值
    system("pause");
    return 0;
}
