// Bài 202: Tính tổng các giá trị có chữ số đầu tiên là chữ số lẻ
// trong mảng một chiều các số nguyên (tongdaule).
#include <iostream>
using namespace std;

bool KTChuSoLeDauTien(int n)
{
    int t = n;
    while (t > 0)
    {
        if (t / 10 == 0)
        {
            if (t % 2 == 1)
            {
                return true;
            }
        }
        t /= 10;
    }
    return false;
}

int Tong(int arr[], int n)
{
    int tong = 0;
    for (int i = 0; i < n; i++)
    {
        if (KTChuSoLeDauTien(arr[i]))
        {
            tong += arr[i];
        }
    }
    return tong;
}

int main()
{
    int n = 6;
    int arr[n] = {5, 66, 52, 300, 3, 9};
    cout << "Tong gia tri co chua so dau le trong mang la: " << Tong(arr, n);
    return 0;
}
