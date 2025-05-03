// Bài 176: Liệt kê các số âm trong mảng số thực
#include <iostream>
using namespace std;

void listNegative(double arr[], int n) {
    cout << "Cac so am trong mang: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    double arr[n];
    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    listNegative(arr, n);
    return 0;
}
