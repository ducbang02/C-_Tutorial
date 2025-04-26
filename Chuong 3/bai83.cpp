
#include <iostream>
using namespace std;

// Bài 83: Nhập hai số thực, kiểm tra chúng có cùng dấu không
int main() {
    float a, b;
    cout << "Nhap hai so thuc a, b: ";
    cin >> a >> b;
    if ((a * b) > 0)
        cout << "Hai so cung dau" << endl;
    else
        cout << "Hai so khong cung dau" << endl;
    return 0;
}
