#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
// 14. Viết hàm cắt chuỗi họ tên thành chuỗi họ lót và chuỗi tên.
// ví dụ: cắt chuỗi"Nguyen Van A" thành chuỗi lót"NguyenVan" và chuỗi"A"

void CatChuoi(string s, string &s1, string &s2)
{
    vector<string> words;
    stringstream ss(s);
    string word;
    while (ss >> word)
    {
        words.push_back(word);
    }

    for (int i = 0; i < words.size() - 1; i++)
    {
        s1 += words[i];
    }

    s2 = words[words.size() - 1];
}

int main()
{
    string s, s1, s2;
    cout << "Nhap chuoi: ";
    getline(cin, s);
    CatChuoi(s, s1, s2);

    cout << s1 << "\n";
    cout << s2;

    return 0;
}