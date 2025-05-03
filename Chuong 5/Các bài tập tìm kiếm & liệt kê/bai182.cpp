// Bài 182: Liệt kê giá trị có ít nhất một lân cận trái dấu
#include <iostream>
using namespace std;

void listOppositeNeighbor(double arr[], int n) {
    cout << "Cac phan tu co it nhat 1 lan can trai dau: ";
    for (int i = 0; i < n; i++) {
        if ((i > 0 && arr[i] * arr[i - 1] < 0) || (i < n - 1 && arr[i] * arr[i + 1] < 0))
            cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    double arr[n];
    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    listOppositeNeighbor(arr, n);
    return 0;
}
