#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "请输入一个字符" << endl;//提示输入
	cin >> ch;//输入
	if (ch >= 'a' && ch <= 'z')//输入为小写字母
	{
		cout<<char(ch-32)<<endl;//输出大写字母
	}
	else//非小写字母
	{
		cout << ch + 1 << endl;//输出其后继字符的 ASCII 码值
	}
	return 0;
}