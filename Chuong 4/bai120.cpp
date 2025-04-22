
#include <iostream>
#include <cctype>
using namespace std;

// Bài 120: Đổi tất cả ký tự hoa trong chuỗi sang chữ thường
int main() {
    string s;
    cout << "Nhap chuoi: ";
    getline(cin, s);
    for (char &c : s) {
        c = tolower(c);
    }
    cout << "Chuoi in thuong: " << s << endl;
    return 0;
}
