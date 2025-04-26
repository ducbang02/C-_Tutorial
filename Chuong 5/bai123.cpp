// bai123.cpp
// Tìm vị trí mà giá trị tại đó là nhỏ nhất trong mảng một chiều các số nguyên.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    int a[n];
    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    int viTri = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] < a[viTri]) viTri = i;
    }
    cout << "Vi tri gia tri nho nhat: " << viTri << endl;
    return 0;
}
