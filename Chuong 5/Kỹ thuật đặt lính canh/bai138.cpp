// bai138.cpp
// Viết hàm tính tổng các số dương trong mảng 1 chiều các số thực.

#include <iostream>
using namespace std;

float sumPositive(float arr[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0)
            sum += arr[i];
    }
    return sum;
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
    cout << "Tổng các số dương: " << sumPositive(arr, n) << endl;
    return 0;
}
