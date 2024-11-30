#include<iostream>
using namespace std;
void main()
{
	int i, j, * pi, * pj;     //此处的*表示定义指针变量，而非间接运算符
	pi = &i;
	pj = &j;
	i = 5; j = 7;
	cout << i << '\t' << j << '\t' << pi << '\t' << pj << endl;
	cout << &i << '\t' << *&i << '\t' << &j << '\t' << *&j;
}