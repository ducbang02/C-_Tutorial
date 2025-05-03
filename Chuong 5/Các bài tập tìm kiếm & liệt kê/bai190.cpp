// Bài 190: Liệt kê các số có toàn chữ số lẻ
#include <iostream>
using namespace std;

bool allOddDigits(int n) {
    n = abs(n); // lay tri tuyet doi
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 == 0) return false;
        n /= 10;
    }
    return true;
}

void listAllOddDigits(int arr[], int n) {
    cout << "Cac so co toan chu so le: ";
    for (int i = 0; i < n; i++) {
        if (allOddDigits(arr[i])) cout << arr[i] << " ";
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
    listAllOddDigits(arr, n);
    return 0;
}
