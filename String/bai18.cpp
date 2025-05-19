#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
// 18. Nhập một chuỗi bất kì, yêu cầu nhập 1 kí tự muốn xóa.
// Thực hiện xóa tất cả những kí tự đó trong chuỗi.

void XoaKiTu(string &s, char c)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == c)
        {
            s.erase(i, 1);
            i--;
        }
    }
}

int main()
{
    string s;
    char c;
    cout << "Nhap chuoi: ";
    getline(cin, s);
    cout << "\nNhap ki tu muon xoa: ";
    cin >> c;
    XoaKiTu(s, c);
    cout << "\nChuoi sau khi xoa: " << s;
}