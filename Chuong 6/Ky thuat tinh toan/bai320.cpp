#include <iostream>
#include <algorithm>

using namespace std;

// bai320. Tính tổng các số dương trong ma trận các số thực
float TinhTong(float a[][100], int n, int m)
{
    float tong = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] > 0)
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
        {5, 6, 8, 9},
        {7, 1, 2, 11},
        {15, 16, 3, 4},
        {12, 13, 14, 14}};
    cout << "Tong duong cua mang so thuc la: " << TinhTong(a, n, m);
    return 0;
}