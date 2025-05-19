#include <iostream>
#include <string>

using namespace std;
// 3. Nhập vào hai chuỗi s1 và s2, nối chuỗi s2 vào s1. Xuất chuỗi s1 ra màn hình.

int main()
{
    cout << "Nhap chuoi 1: ";
    string s1;
    getline(cin, s1);
    cout << "Nhap chuoi : ";
    string s2;
    getline(cin, s2);

    s1.append(s2);
    cout << s1;
    return 0;
}