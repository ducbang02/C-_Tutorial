#include <iostream>
#include <string>

using namespace std;
// 8. Viết chương trình đảo ngược các kí tự trong chuỗi.
// Ví dụ: nhập ABCDE, xuất ra màn hình là: EDCBA

string Reverse(string &s)
{
    string s2 = "";
    for (int i = s.length() - 1; i >= 0; i--)
    {
        s2 += s[i];
    }
    return s2;
}

int main()
{
    string s;
    getline(cin, s);

    cout << Reverse(s);
    return 0;
}