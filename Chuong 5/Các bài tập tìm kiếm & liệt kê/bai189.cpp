// Bài 189: Liệt kê các số nguyên tố có chữ số đầu tiên lẻ
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) if (n % i == 0) return false;
    return true;
}

int firstDigit(int n) {
    while (n >= 10) n /= 10;
    return n;
}

void listPrimeFirstDigitOdd(int arr[], int n) {
    cout << "Cac so nguyen to co chu so dau tien le: ";
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i]) && firstDigit(arr[i]) % 2 != 0)
            cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    int arr[n];
    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    listPrimeFirstDigitOdd(arr, n);
    return 0;
}
