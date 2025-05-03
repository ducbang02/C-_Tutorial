// Bài 179: Liệt kê giá trị lớn hơn trị tuyệt đối phần tử liền sau
#include <iostream>
#include <cmath>
using namespace std;

void listGreaterThanNextAbs(double arr[], int n) {
    cout << "Cac phan tu lon hon tri tuyet doi cua phan tu lien sau: ";
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > abs(arr[i + 1])) cout << arr[i] << " ";
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
    listGreaterThanNextAbs(arr, n);
    return 0;
}
