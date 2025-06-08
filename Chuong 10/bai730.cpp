#include <iostream>
using namespace std;

// 730.Tính S(n) = 1 + 2 + 3 + … + n.

int TinhTong(int a[], int n)
{
    if (n == 0)
        return 0;
    return a[n - 1] + TinhTong(a, n - 1);
}

int main()
{
    int arr[] = {-1, -2, 5, -4, -5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Tong: " << TinhTong(arr, n) << endl;

    return 0;
}
