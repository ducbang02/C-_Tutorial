// bai134.cpp
// Viết hàm tìm giá trị lớn nhất trong mảng 1 chiều các số thực.

#include <iostream>
using namespace std;

float findMax(float arr[], int size) {
    float maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
    return maxVal;
}

int main() {
    int n;
    cout << "Nhập số lượng phần tử: ";
    cin >> n;
    float arr[n];
    cout << "Nhập các phần tử: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Giá trị lớn nhất: " << findMax(arr, n) << endl;
    return 0;
}
