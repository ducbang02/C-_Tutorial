#include <iostream>

using namespace std;
// 271. Xóa các phần tử có chỉ số k trong mảng (xoavitri).
void XoaX(float a[], int &n, int k)
{
    for (int i = k; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
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
    int n = 6;
    float a[n] = {5.9, 2.5, 3.6, 8.9, 4.1, 7};
    cout << "mang ban dau: ";
    XuatMang(a, n);
    int k = 2;
    XoaX(a, n, k);
    cout << "\nMang sau khi xoa x: ";
    XuatMang(a, n);
    return 0;
}