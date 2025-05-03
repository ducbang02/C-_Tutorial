// bai140.cpp
// Viết hàm tính trung bình cộng các số dương trong mảng 1 chiều các số thực.

#include <iostream>
using namespace std;

float averagePositive(float arr[], int size) {
    float sum = 0;
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            sum += arr[i];
            count++;
        }
    }
    if (count == 0) return 0;
    return sum / count;
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
    cout << "Trung bình cộng các số dương: " << averagePositive(arr, n) << endl;
    return 0;
}
