#include <iostream>
#include <algorithm>

using namespace std;

// bai327. Tính tổng các giá trị nằm trên biên của ma trận.
float TinhTongBien(float a[][100], int n, int m)
{
    float tong = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1)
            {
                tong += a[i][j];
            }
        }
    }
    return tong;
}

int main()
{
    int n = 4;
    int m = 4;
    float a[][100] = {
        {1, 1, 1, 1},
        {1, 1, 2, 1},
        {1, 16, 3, 1},
        {1, 1, 1, 2}};
    cout << "Tong bien mang so thuc la: " << TinhTongBien(a, n, m);
    return 0;
}