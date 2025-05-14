#include <iostream>

using namespace std;
// 283. Hãy đảo ngược mảng ban đầu (daomang).
// void Reverse(int a[], int n)
// {
//     int j = 0;
//     int temp[n];
//     for (int i = n - 1; i >= 0; i--)
//     {
//         temp[j++] = a[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         a[i] = temp[i];
//     }
// }

void Reverse(int a[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
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
    int a[] = {3, 4, 5, 2, 0};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Mang ban dau: ";
    XuatMang(a, n);

    Reverse(a, n);

    cout << "Mang sau khi dao nguoc: ";
    XuatMang(a, n);

    return 0;
}