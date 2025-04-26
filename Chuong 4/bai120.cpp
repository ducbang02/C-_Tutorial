// bai120.cpp
// Liệt kê tất cả các số chính phương nhỏ hơn n.

#include <iostream>
#include <cmath>
using namespace std;

bool laChinhPhuong(int n) {
    int can = sqrt(n);
    return can * can == n;
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Cac so chinh phuong nho hon " << n << ": ";
    for (int i = 1; i < n; i++) {
        if (laChinhPhuong(i)) cout << i << " ";
    }
    cout << endl;
    return 0;
}
