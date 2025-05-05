// Bài 201: Tính tổng các phần tử duong trong mảng so thuc (tonggiatri)
#include <iostream>
using namespace std;

float TongSoDuong(float arr[], int n)
{
    float tong = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            tong += arr[i];
        }
    }
    return tong;
}

int main()
{
    int n = 6;
    float arr[n] = {2.5, -5.6, -7, -9.2, -9.3, 12};
    cout << "Tong gia tri duong trong mang la: " << TongSoDuong(arr, n);
    return 0;
}
