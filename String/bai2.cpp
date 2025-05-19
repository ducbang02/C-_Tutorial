#include <iostream>
#include <string>
using namespace std;

// Hàm loại bỏ khoảng trắng thừa trong chuỗi
void DeleteSpace(string &s)
{
    // 1. Xoá khoảng trắng ở đầu
    while (!s.empty() && s.front() == ' ')
    {
        s.erase(s.begin());
    }

    // 2. Xoá khoảng trắng ở cuối
    while (!s.empty() && s.back() == ' ')
    {
        s.pop_back();
    }

    // 3. Xoá khoảng trắng dư ở giữa (giữ lại 1 khoảng trắng giữa các từ)
    string result;
    bool in_space = false;

    for (char c : s)
    {
        if (c != ' ')
        {
            result += c;
            in_space = false;
        }
        else if (!in_space)
        {
            result += ' ';
            in_space = true;
        }
    }

    s = result;
}

int main()
{
    cout << "Nhap chuoi: ";
    string s;
    getline(cin, s);
    DeleteSpace(s);
    cout << "Chuoi sau khi xoa khoang trang thua: [" << s << "]\n";
    return 0;
}
