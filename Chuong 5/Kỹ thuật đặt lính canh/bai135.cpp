// bai135.cpp
// Viết hàm tìm giá trị dương đầu tiên trong mảng 1 chiều các số thực.

#include <iostream>
using namespace std;

float findFirstPositive(float arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0)
            return arr[i];
    }
    return -1; // Không có số dương
}

int main() {
    int n;
    cout << "Nhập số lượng phần tử: ";
    cin >> n;
    float arr[n];
    cout << "Nhập các phần tử: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    float result = findFirstPositive(arr, n);
    if (result == -1)
        cout << "Không có số dương trong mảng." << endl;
    else
        cout << "Giá trị dương đầu tiên: " << result << endl;
    return 0;
}
