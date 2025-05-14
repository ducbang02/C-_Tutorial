#include <iostream>

using namespace std;

// 307. Cho mảng một chiều các số nguyên a. Hãy tạo mảng b từ mảng a,
// sao cho mảng b chỉ chứa các giá trị lẻ.

void TaoMangB(int a[], int b[], int n, int &m)
{
    m = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1)
        {
            b[m++] = a[i];
        }
    }
}

void XuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int a[] = {5, 7, 8, 1, 3, 6, 12};
    int n = sizeof(a) / sizeof(a[0]);
    int b[100];
    int m;
    cout << "mang ban dau: ";
    XuatMang(a, n);
    TaoMangB(a, b, n, m);
    cout << "\nTao mang B cac so le la: ";
    XuatMang(b, m);
    return 0;
}