#include <iostream>

using namespace std;
// 272. Hãy xóa tất cả các số lớn nhất trong mảng các số thực (xoalonnhat).
float Max(float a[], int n)
{
    float max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}

void XoaAllMax(float a[], int &n)
{
    float max = Max(a, n);
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != max)
        {
            a[j] = a[i];
            j++;
        }
    }
    j = n;
}

void XuatMang(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int n = 8;
    float a[n] = {5.9, 8.9, 2.5, 3.6, 8.9, 4.1, 7, 8.9};
    cout << "mang ban dau: ";
    XuatMang(a, n);
    XoaAllMax(a, n);
    cout << "\nMang sau khi xoa x: ";
    XuatMang(a, n);
    return 0;
}