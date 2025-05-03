// Bài 194: Liệt kê các cặp gần nhau nhất trong mảng thực
#include <iostream>
#include <cmath>
using namespace std;

void listClosestPairs(double arr[], int n) {
    if (n < 2) {
        cout << "Khong co cap nao!" << endl;
        return;
    }
    double minDiff = fabs(arr[1] - arr[0]);
    for (int i = 0; i < n-1; i++) {
        double diff = fabs(arr[i+1] - arr[i]);
        if (diff < minDiff)
            minDiff = diff;
    }
    cout << "Cac cap gan nhau nhat (chenh lech " << minDiff << "): ";
    for (int i = 0; i < n-1; i++) {
        if (fabs(arr[i+1] - arr[i]) == minDiff)
            cout << "(" << arr[i] << ", " << arr[i+1] << ") ";
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
    listClosestPairs(arr, n);
    return 0;
}
