// Bài 195: Liệt kê các bộ ba (a, b, c) thỏa a = b + c
#include <iostream>
using namespace std;

void listTriplets(int arr[], int n) {
    cout << "Cac bo ba (a, b, c) thoa a = b + c: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (i != j && i != k && j != k && arr[i] == arr[j] + arr[k]) {
                    cout << "(" << arr[i] << ", " << arr[j] << ", " << arr[k] << ") ";
                }
            }
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    int arr[n];
    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    listTriplets(arr, n);
    return 0;
}
