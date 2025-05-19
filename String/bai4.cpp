#include <iostream>
#include <string>

using namespace std;
// 4. Đổi tất cả các kí tự có trong chuỗi thành chữ thường (không dùng hàm strlwr).

void ToLower(string &s)
{
    for (auto &var : s)
    {
        var = tolower(var);
    }
}

int main()
{
    string s;
    getline(cin, s);
    ToLower(s);
    cout << s;
    return 0;
}