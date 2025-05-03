// Bài 188: Liệt kê vị trí chứa giá trị chẵn lớn nhất trong mảng
#include <iostream>
using namespace std;

void listMaxEvenPositions(int arr[], int n) {
    int maxEven = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            if (maxEven == -1 || arr[i] > maxEven)
                maxEven = arr[i];
        }
    }
    if (maxEven == -1) {
        cout << "Khong co gia tri chan trong mang." << endl;
        return;
    }
    cout << "Vi tri cac gia tri chan lon nhat: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] == maxEven) cout << i << " ";
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
    listMaxEvenPositions(arr, n);
    return 0;
}
