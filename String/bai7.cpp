#include <iostream>
#include <string>

using namespace std;
// 7. Viết chương trình đổi chữ xen kẽ 1 chữ hoa và 1 chữ thường.
// Ví dụ: nhập ABCDEfgh đổi thành AbCdEfGh

void XenKe(string &s)
{
    bool flag = true;
    for (auto &var : s)
    {
        if (isalpha(var))
        {
            if (flag)
            {
                var = toupper(var);
            }
            else
            {
                var = tolower(var);
            }
        }
        flag = !flag;
    }
}

int main()
{
    string s;
    getline(cin, s);
    XenKe(s);
    cout << s;
    return 0;
}