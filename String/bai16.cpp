#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
// 16. Viết hàm kiểm tra xem chuỗi có đối xứng hay không?.
bool KTDoiXung(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != s[s.length() - 1 - i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s, s2;
    cout << "Nhap chuoi: ";
    getline(cin, s);
    if (KTDoiXung(s))
    {
        cout << "Doi Xung";
    }
    else
    {
        cout << "Ko Doi Xung";
    }
}