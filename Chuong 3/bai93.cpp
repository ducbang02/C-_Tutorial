
#include <iostream>
using namespace std;

// Bài 93: Kiểm tra một số có phải là số nguyên tố hay không
int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    bool isPrime = true;
    if (n < 2) isPrime = false;
    else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime) cout << n << " la so nguyen to" << endl;
    else cout << n << " khong la so nguyen to" << endl;
    return 0;
}
