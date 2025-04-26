// bai125.cpp
// Đếm số lượng số nguyên tố nhỏ hơn 100 trong mảng.

#include <iostream>
using namespace std;

bool laNguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    int a[n];
    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < 100 && laNguyenTo(a[i])) dem++;
    }
    cout << "So luong so nguyen to nho hon 100: " << dem << endl;
    return 0;
}
