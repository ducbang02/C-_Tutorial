// bai133.cpp
// Viết hàm liệt kê các vị trí có giá trị âm trong mảng 1 chiều các số thực.

#include <iostream>
using namespace std;

void listNegativePositions(float arr[], int size) {
    cout << "Các vị trí có giá trị âm: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0)
            cout << i << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Nhập số lượng phần tử: ";
    cin >> n;
    float arr[n];
    cout << "Nhập các phần tử: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    listNegativePositions(arr, n);
    return 0;
}
