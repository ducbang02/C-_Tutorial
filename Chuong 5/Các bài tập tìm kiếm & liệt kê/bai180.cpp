// Bài 180: Liệt kê giá trị nhỏ hơn trị tuyệt đối liền sau và lớn hơn liền trước
#include <iostream>
#include <cmath>
using namespace std;

void listSpecial(double arr[], int n)
{
    cout << "Cac phan tu thoa dieu kien: ";
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] < abs(arr[i + 1]))
            cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    double arr[n];
    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    listSpecial(arr, n);
    return 0;
}
