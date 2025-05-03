// Bài 178: Liệt kê các số chẵn thuộc đoạn [x, y] trong mảng số nguyên
#include <iostream>
using namespace std;

void listEvenInRange(int arr[], int n, int x, int y) {
    cout << "Cac so chan thuoc [" << x << ", " << y << "]: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0 && arr[i] >= x && arr[i] <= y) cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n, x, y;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    int arr[n];
    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "Nhap doan [x, y]: ";
    cin >> x >> y;
    listEvenInRange(arr, n, x, y);
    return 0;
}
