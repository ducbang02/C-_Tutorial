// bai124.cpp
// Kiểm tra trong mảng các số nguyên có tồn tại giá trị chẵn nhỏ hơn 2004 hay không.

#include <iostream>
using namespace std;

bool tonTaiChanNhoHon2004(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0 && a[i] < 2004) return true;
    }
    return false;
}

int main() {
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    int a[n];
    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    if (tonTaiChanNhoHon2004(a, n))
        cout << "Co ton tai so chan nho hon 2004." << endl;
    else
        cout << "Khong ton tai." << endl;
    return 0;
}
