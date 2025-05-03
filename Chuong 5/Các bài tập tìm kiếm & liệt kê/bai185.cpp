// Bài 185: Liệt kê vị trí các số chính phương trong mảng số nguyên
#include <iostream>
#include <cmath>
using namespace std;

bool isPerfectSquare(int n) {
    int root = sqrt(n);
    return root * root == n;
}

void listSquarePositions(int arr[], int n) {
    cout << "Vi tri cac so chinh phuong: ";
    for (int i = 0; i < n; i++) {
        if (isPerfectSquare(arr[i])) cout << i << " ";
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
    listSquarePositions(arr, n);
    return 0;
}
