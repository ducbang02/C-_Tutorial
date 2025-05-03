// bai131.cpp
// Viết hàm xuất mảng 1 chiều các số nguyên.

#include <iostream>
using namespace std;

void outputArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Nhập số lượng phần tử: ";
    cin >> n;
    int arr[n];
    cout << "Nhập các phần tử: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Mảng đã nhập: ";
    outputArray(arr, n);
    return 0;
}
