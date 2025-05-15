#include <iostream>
#include <algorithm>

using namespace std;

// bai334. Viết hàm đếm số lượng số dương trong ma trận các số thực.
int DemDuong(float a[][100], int n, int m)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] > 0)
            {
                dem++;
            }
        }
    }
    return dem;
}

int main()
{
    int n = 4;
    int m = 4;
    float a[][100] = {
        {5, 6, 8, 9},
        {7, -1, 2, 11},
        {15, -16, 3, 4},
        {12, -13, 14, -14}};
    cout << "So luong so duong cua mang so thuc la: " << DemDuong(a, n, m);
    return 0;
}