// bai132.cpp
// Viết hàm liệt kê các giá trị chẵn trong mảng 1 chiều số nguyên.

#include <iostream>
using namespace std;

void listEvenNumbers(int arr[], int size) {
    cout << "Các giá trị chẵn trong mảng: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0)
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

    listEvenNumbers(arr, n);
    return 0;
}
