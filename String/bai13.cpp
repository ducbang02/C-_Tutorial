#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
// 13. Viết chương đảo vị trí của từ đầu và từ cuối.
// Ví dụ: nhập “bo an co” xuất ra “co an bo”

int main()
{
    string s;
    cout << "Nhap chuoi: ";
    getline(cin, s);

    stringstream ss(s);
    vector<string> words;
    string word;

    while (ss >> word)
    {
        words.push_back(word);
    }

    if (words.size() > 2)
    {
        swap(words[0], words[words.size() - 1]);
    }

    for (int i = 0; i < words.size(); i++)
    {
        cout << words[i];
        if (i < words.size())
            cout << " ";
    }

    return 0;
}