#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
// 15. Nhập một chuỗi bất kỳ, sau đó hỏi người dùng cần tách bắt đầu từ đâu trong chuỗi trở về sau.
// Ví dụ: Nhập chuỗi S1: “Trường Đại Học Tôn Đức Thắng”. Người nhập muốn tách
// bắt đầu từ chữ “Tôn” thì sẽ xuất ra chuỗi “Tôn Đức Thắng” ra màn hình.
string TachChuoi(string s, string s2)
{
    return s.substr(s.find(s2));
}

int main()
{
    string s, s2;
    cout << "Nhap chuoi: ";
    getline(cin, s);
    cout << "Nhap tu can tach: ";
    getline(cin, s2);
    cout << "Chuoi can tach la: ";
    cout << TachChuoi(s, s2);
}