// Bài 200: Tính tổng các phần tử trong mảng (tonggiatri)
#include <iostream>
using namespace std;

float TongGiaTri(float arr[], int n)
{
    float tong = 0;
    for (int i = 0; i < n; i++)
    {
        tong += arr[i];
    }
    return tong;
}

int main()
{
    int n = 6;
    float arr[n] = {2.5, 5.6, 7, 9.2, 9.3, 12};
    cout << "Tong gia tri trong mang la: " << TongGiaTri(arr, n);
    return 0;
}
