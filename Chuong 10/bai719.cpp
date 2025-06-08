#include <iostream>

using namespace std;
// 719.Cho mảng một chiều các số nguyên. Viết hàm đệ qui xuất mảng theo
// thứ tự từ trái sang phải (xuất ngược).
void XuatMang(int a[], int n, int i)
{
    if (i == n)
        return;
    cout << a[i] << " ";
    XuatMang(a, n, i + 1);
}

int main()
{
    int a[] = {1, 3, 5, 7, 9, 11};
    XuatMang(a, 6, 0);

    return 0;
}