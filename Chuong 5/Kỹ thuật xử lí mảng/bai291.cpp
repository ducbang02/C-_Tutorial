#include <bits/stdc++.h>

using namespace std;
// 291. Hãy biến đổi mảng bằng cách thay các giá trị lớn nhất bằng giá trị nhỏ nhất
// và ngược lại (biendoi).

int MinNumber(int a[], int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    return min;
}

int MaxNumber(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}

void BienDoi(int a[], int n)
{
    int max = MaxNumber(a, n);
    int min = MinNumber(a, n);
    for (int i = 0; i < n; i++)
    {
        if (max == a[i])
        {
            a[i] = min;
        }
        else if (min == a[i])
        {
            a[i] = max;
        }
    }
}

void XuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main()
{
    int a[] = {2, 1, 4, 5, 6, 8, 3};
    int n = sizeof(a) / sizeof(a[0]);
    int k = 3;
    cout << "Mang ban dau: ";
    XuatMang(a, n);

    BienDoi(a, n);

    cout << "Mang sau khi doi cho max min: ";
    XuatMang(a, n);

    return 0;
}