#include <iostream>
#include <algorithm>

using namespace std;

// bai336. Đếm tần suất xuất hiện của một giá trị x trong ma trận các số thực.
int DemX(float a[][100], int n, int m, float x)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == x)
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
        {12, 12, 14, -14}};
    float x = 12;
    cout << "So luong so duong cua mang so thuc la: " << DemX(a, n, m, x);
    return 0;
}