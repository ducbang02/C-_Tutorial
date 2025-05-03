// bai145.cpp
// Viết hàm tính tổng các số lẻ trong mảng 1 chiều các số nguyên.

#include <iostream>
using namespace std;

int sumOdd(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0)
            sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    cout << "Nhập số lượng phần tử: ";
    cin >> n;
    int arr[n];
    cout << "Nhập các phần tử: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Tổng các số lẻ: " << sumOdd(arr, n) << endl;
    return 0;
}
