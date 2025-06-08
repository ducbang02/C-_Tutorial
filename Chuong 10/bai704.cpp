#include <iostream>

using namespace std;
// 704. Cho mảng một chiều các số nguyên. Viết hàm tính
// tổng các số chẵn trong mảng bằng phương pháp đệ qui.
// int TongChan(int a[], int n)
// {
//     if (n == 0)
//         return 0;
//     if (a[n - 1] % 2 == 0)
//     {
//         return a[n - 1] + TongChan(a, n - 1);
//     }
//     else
//     {
//         return TongChan(a, n - 1);
//     }
// }
// c2: duyet tu dau mang
int TongChan(int a[], int n, int i)
{
    if (i == n)
        return 0;
    if (a[i] % 2 == 0)
    {
        return a[i] + TongChan(a, n, i + 1);
    }
    else
    {
        return TongChan(a, n, i + 1);
    }
}

int main()
{
    int a[] = {1, 2, 4, 3, 5, 6, 7};
    cout << TongChan(a, 7, 0);
    return 0;
}