// bai122.cpp
// Tìm giá trị lớn nhất trong mảng một chiều các số thực.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    double a[n];
    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    double maxVal = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > maxVal) maxVal = a[i];
    }
    cout << "Gia tri lon nhat trong mang: " << maxVal << endl;
    return 0;
}
