#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
// 20. Viết chương trình đảo ngược thứ tự các từ trong chuỗi
// Ví dụ: Nhập: lap trinh bang ngon ngu c
// Xuất ra màn hình là: c ngu ngon bang trinh lap

string Reverse(string &s)
{
    string temp = "";
    string word;
    stringstream ss(s);
    vector<string> words;
    while (ss >> word)
    {
        words.push_back(word);
    }

    for (int i = words.size() - 1; i > 0; i--)
    {
        temp += words[i];
        if (i > 0)
            temp += " ";
    }
    return temp;
}

int main()
{
    string s;
    char c;
    cout << "Nhap chuoi: ";
    getline(cin, s);
    cout << "\nChuoi sau khi dao nguoc la: " << Reverse(s);
}