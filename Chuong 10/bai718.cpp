#include <iostream>

using namespace std;
// 718.Cho mảng một chiều các số nguyên. Viết hàm đệ qui xuất mảng.
void XuatMang(int a[], int n)
{
    if (n == 0)
        return;
    cout << a[n - 1] << " ";
    XuatMang(a, n - 1);
}

int main()
{
    int a[] = {1, 3, 5, 7, 9, 11};
    XuatMang(a, 6);

    return 0;
}