// bai127.cpp
// Viết hàm sắp xếp mảng 1 chiều các số thực tăng dần.

#include <iostream>
using namespace std;

void sortArray(float arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                float temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "Nhập số lượng phần tử: ";
    cin >> n;
    float arr[n];
    cout << "Nhập các phần tử: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sortArray(arr, n);

    cout << "Mảng sau khi sắp xếp: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
