// bai128.cpp
// Viết hàm nhập mảng 1 chiều các số thực.

#include <iostream>
using namespace std;

void inputArray(float arr[], int size) {
    cout << "Nhập các phần tử: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

int main() {
    int n;
    cout << "Nhập số lượng phần tử: ";
    cin >> n;
    float arr[n];
    inputArray(arr, n);

    cout << "Mảng vừa nhập: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
