#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
// 19. Đổi các từ ở đầu câu sang chữ hoa và những từ không phải đầu
// câu sang chữ thường.
// Ví dụ: nGuYen vAN a đổi thành: Nguyen Van A
void WordHandle(string &word)
{
    for (int i = 0; i < word.length(); i++)
    {
        if (i == 0)
        {
            word[i] = toupper(word[i]);
        }
        else
        {
            word[i] = tolower(word[i]);
        }
    }
}

string XuLi(string s)
{
    if (s.empty())
        return "";
    string temp = "";
    vector<string> words;
    string word;
    stringstream ss(s);
    while (ss >> word)
    {
        WordHandle(word);
        words.push_back(word);
    }

    for (int i = 0; i < words.size(); i++)
    {
        temp += words[i];
        if (i < words.size() - 1)
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
    cout << "\nChuoi sau khi xu li: " << XuLi(s);
}