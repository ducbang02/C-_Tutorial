// Bài 177: Liệt kê các số thuộc đoạn [x, y] trong mảng số thực
#include <iostream>
using namespace std;

void listInRange(double arr[], int n, double x, double y)
{
    cout << "Cac phan tu thuoc [" << x << ", " << y << "]: ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= x && arr[i] <= y)
            cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    double x, y;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    double arr[n];
    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Nhap doan [x, y]: ";
    cin >> x >> y;
    listInRange(arr, n, x, y);
    return 0;
}
