// Bài 191: Liệt kê các giá trị cực đại trong mảng số thực
#include <iostream>
using namespace std;

void listLocalMaxima(double arr[], int n) {
    cout << "Cac gia tri cuc dai: ";
    if (n == 1) {
        cout << arr[0] << endl;
        return;
    }
    if (arr[0] > arr[1]) cout << arr[0] << " ";
    for (int i = 1; i < n-1; i++) {
        if (arr[i] > arr[i-1] && arr[i] > arr[i+1])
            cout << arr[i] << " ";
    }
    if (arr[n-1] > arr[n-2]) cout << arr[n-1];
    cout << endl;
}

int main() {
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    double arr[n];
    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    listLocalMaxima(arr, n);
    return 0;
}
