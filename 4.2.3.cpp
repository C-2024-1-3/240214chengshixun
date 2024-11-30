#include<iostream>
using namespace std;
//#include “stdio.h”
void f(char* st, int i)
{
    st[i] = '\0';
    cout << st;   // printf(“%s\n”,st);
    if (i > 1) f(st, i - 1);
}
void main()
{
    char st[] = "abcd";
    f(st, 4);
}