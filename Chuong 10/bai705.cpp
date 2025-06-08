#include <iostream>

using namespace std;
// 705. Cho mảng một chiều các số thực. Viết hàm đếm số lượng
// giá trị dương trong mảng bằng phương pháp đệ qui.

int DemDuong(float a[], int n)
{
    if (n == 0)
        return 0;
    if (a[n - 1] > 0)
    {
        return 1 + DemDuong(a, n - 1);
    }
    else
    {
        return DemDuong(a, n - 1);
    }
}

int main()
{
    float a[] = {-1, 2, -4, -3, 5, -6, 7};
    cout << DemDuong(a, 7);
    return 0;
}