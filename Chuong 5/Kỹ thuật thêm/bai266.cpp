#include <iostream>

using namespace std;
// 266. Hãy thêm một phần tử có giá trị x vào mảng tại vị trí k (themvitri).
void ThemX(float a[], int &n, float x, int k)
{
    if (k < 0 || k > n)
    {
        cout << "vi tri k khong hop le";
    }

    for (int i = n; i > k; i--)
    {
        a[i] = a[i - 1];
    }

    a[k] = x;
    n++;
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
    float a[] = {5.9, 2.5, 3.6, 8.9, 4.1, 7};
    cout << "mang ban dau: ";
    XuatMang(a, n);
    int x = 8;
    int k = 3;
    ThemX(a, n, x, k);
    cout << "\nMang sau khi them x: ";
    XuatMang(a, n);
    return 0;
}