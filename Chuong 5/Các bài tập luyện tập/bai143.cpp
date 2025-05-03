// bai143.cpp
// Viết hàm đếm số lượng số lẻ trong mảng 1 chiều các số nguyên.

#include <iostream>
using namespace std;

int countOdd(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0)
            count++;
    }
    return count;
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
    cout << "Số lượng số lẻ: " << countOdd(arr, n) << endl;
    return 0;
}
