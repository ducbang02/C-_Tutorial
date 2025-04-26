// bai119.cpp
// Liệt kê tất cả các số nguyên tố nhỏ hơn n.

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
    cout << "Nhap n: ";
    cin >> n;
    cout << "Cac so nguyen to nho hon " << n << ": ";
    for (int i = 2; i < n; i++) {
        if (laNguyenTo(i)) cout << i << " ";
    }
    cout << endl;
    return 0;
}
