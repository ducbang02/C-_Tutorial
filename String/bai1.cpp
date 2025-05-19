#include <iostream>
#include <string>

using namespace std;
// 2. Nhập vào một chuỗi, hãy loại bỏ những khoảng trắng thừa trong chuỗi.
void DeleteSpace(string &s)
{
    while (!s.empty() && s.front() == ' ')
    {
        s.erase(s.begin());
    }

    while (!s.empty() && s.back() == ' ')
    {
        s.pop_back();
    }

    string result;
    bool is_space = false;
    for (auto c : s)
    {
    }
}

int main()
{
    cout << "Nhap chuoi: ";
    string s;
    getline(cin, s);
    DeleteSpace(s);
    cout << s;
    return 0;
}