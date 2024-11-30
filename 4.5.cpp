#include <iostream>
#include <cstring> // 用于strlen函数
using namespace std;
int indexOf(const char s1[], const char s2[]) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if (len1 > len2)
    {
        return -1; // 如果s1比s2长，不可能是子串
    }
    for (int i = 0; i <= len2 - len1; ++i) {
        bool found = true;
        for (int j = 0; j < len1; ++j) 
        {
            if (s2[i + j] != s1[j]) 
            {
                found = false;
                break;
            }
        }
        if (found)
        {
            return i; // 找到匹配的子串，返回下标
        }
    }
    return -1; // 没有找到匹配的子串，返回-1
}
int main() {
    const int MAX_LEN = 200; // 假设字符串最大长度为200
    char s1[MAX_LEN], s2[MAX_LEN];
    cout << "Enter the first string: ";
    cin.getline(s1, MAX_LEN);
    cout << "Enter the second string: ";
    cin.getline(s2, MAX_LEN);
    int result = indexOf(s1, s2);
    if (result != -1) {
        cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is " << result << endl;
    }
    else {
        cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is –1" << endl;
    }
    return 0;
}
