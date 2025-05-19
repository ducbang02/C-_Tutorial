#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
// 17. Viết hàm tra xem trong chuỗi có kí tự số hay không nếu có tách ra
// thành một mảng số riêng.

bool KTTachSo(string s, vector<int> &numbers)
{
    string temp = "";
    bool checkNumber = false;
    for (char c : s)
    {
        if (isdigit(c))
        {
            temp += c;
            checkNumber = true;
        }
        else
        {
            if (!temp.empty())
            {
                numbers.push_back(stoi(temp));
                temp = "";
            }
        }
    }
    if (!temp.empty())
    {
        numbers.push_back(stoi(temp));
        temp = "";
    }

    return checkNumber;
}

int main()
{
    string s, s2;
    cout << "Nhap chuoi: ";
    getline(cin, s);
    vector<int> numbers;

    if (KTTachSo(s, numbers))
    {
        cout << "Chuoi co so" << "\n";
        for (auto var : numbers)
        {
            cout << var << " ";
        }
    }
    else
    {
        cout << "Chuoi k co so";
    }
}