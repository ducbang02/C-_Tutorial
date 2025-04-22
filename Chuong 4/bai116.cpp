
#include <iostream>
using namespace std;

// Bài 116: Viết chương trình nhập vào một chuỗi và đếm số ký tự trong chuỗi
int main() {
    string s;
    cout << "Nhap chuoi: ";
    getline(cin, s);
    cout << "So ky tu trong chuoi: " << s.length() << endl;
    return 0;
}
