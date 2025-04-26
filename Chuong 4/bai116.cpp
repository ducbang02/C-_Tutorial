// bai116.cpp
// Viết chương trình nhập n và tính tổng S(n) = 1 + 2 + 3 + ... + n.

#include <iostream>
using namespace std;

int tinhTong(int n) {
    int tong = 0;
    for (int i = 1; i <= n; i++) {
        tong += i;
    }
    return tong;
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Tong S(n) = " << tinhTong(n) << endl;
    return 0;
}
