// Bài 186: Liệt kê vị trí giá trị bằng giá trị âm đầu tiên trong mảng
#include <iostream>
using namespace std;

void listFirstNegativePositions(double arr[], int n) {
    double firstNegative = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            firstNegative = arr[i];
            break;
        }
    }
    if (firstNegative == -1) {
        cout << "Khong co so am trong mang." << endl;
        return;
    }
    cout << "Vi tri cac phan tu bang gia tri am dau tien: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] == firstNegative) cout << i << " ";
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
    listFirstNegativePositions(arr, n);
    return 0;
}
