// Bài 192: Liệt kê các số nguyên có chữ số đầu tiên chẵn
#include <iostream>
using namespace std;

int firstDigit(int n) {
    n = abs(n);
    while (n >= 10) n /= 10;
    return n;
}

void listFirstDigitEven(int arr[], int n) {
    cout << "Cac so co chu so dau tien chan: ";
    for (int i = 0; i < n; i++) {
        if (firstDigit(arr[i]) % 2 == 0)
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
    listFirstDigitEven(arr, n);
    return 0;
}
