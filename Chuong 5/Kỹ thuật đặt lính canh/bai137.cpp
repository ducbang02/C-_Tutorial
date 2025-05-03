// bai137.cpp
// Viết hàm đếm số lượng số dương trong mảng 1 chiều các số thực.

#include <iostream>
using namespace std;

int countPositive(float arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0)
            count++;
    }
    return count;
}

int main() {
    int n;
    cout << "Nhập số lượng phần tử: ";
    cin >> n;
    float arr[n];
    cout << "Nhập các phần tử: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Số lượng số dương trong mảng: " << countPositive(arr, n) << endl;
    return 0;
}
