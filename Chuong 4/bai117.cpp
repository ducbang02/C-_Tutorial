
#include <iostream>
using namespace std;

// Bài 117: Viết chương trình kiểm tra chuỗi có phải là palindrome
int main() {
    string s;
    cout << "Nhap chuoi: ";
    getline(cin, s);
    bool isPalindrome = true;
    for (int i = 0; i < s.length() / 2; i++) {
        if (s[i] != s[s.length() - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome)
        cout << "Chuoi la palindrome" << endl;
    else
        cout << "Chuoi khong la palindrome" << endl;
    return 0;
}
