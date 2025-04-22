
#include <iostream>
using namespace std;

// Bài 78: Liệt kê tất cả ước số của số nguyên dương n
int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Cac uoc cua " << n << " la: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
