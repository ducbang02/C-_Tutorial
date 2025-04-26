// bai117.cpp
// Viết chương trình nhập n và tính tổng S(n) = x + x^2 + x^3 + ... + x^n.

#include <iostream>
#include <cmath>
using namespace std;

double tinhTongLuyThua(double x, int n) {
    double tong = 0;
    for (int i = 1; i <= n; i++) {
        tong += pow(x, i);
    }
    return tong;
}

int main() {
    double x;
    int n;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Tong S(n) = " << tinhTongLuyThua(x, n) << endl;
    return 0;
}
