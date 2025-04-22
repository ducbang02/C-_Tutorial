
#include <iostream>
#include <cctype>
using namespace std;

// Bài 119: Đổi tất cả ký tự thường trong chuỗi sang chữ hoa
int main() {
    string s;
    cout << "Nhap chuoi: ";
    getline(cin, s);
    for (char &c : s) {
        c = toupper(c);
    }
    cout << "Chuoi in hoa: " << s << endl;
    return 0;
}
