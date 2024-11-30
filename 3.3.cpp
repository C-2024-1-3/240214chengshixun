#include<iostream>
#include <iomanip>
#include "mytemperature.h";
using namespace std;
int main()
{
	double cel, fah;//定义摄氏度和华氏度
	cout << "请输入摄氏温度";
	cin >> cel;
	printf("%.1f %.1f\n", cel, celsius_to_fah(cel));
	cout << "请输入华氏温度 ";
	cin >> fah;
	printf("%.1f %.2f\n", fah, fahrenheit_to_cels(fah));
	return 0;
}