#include <iostream>
#include <string>

using namespace std;
// 6. Viết chương trình đổi những kí tự đầu tiên của mỗi từ thành chữ in hoa.

void CapitalizeFirstLetters(string &s)
{
    bool new_word = true;
    for (auto &var : s)
    {
        if (isspace(var))
        {
            new_word = true;
        }
        else if (new_word)
        {
            var = toupper(var);
            new_word = false;
        }
        else
        {
            var = tolower(var);
        }
    }
}

int main()
{
    string s;
    getline(cin, s);
    CapitalizeFirstLetters(s);
    cout << s;
    return 0;
}