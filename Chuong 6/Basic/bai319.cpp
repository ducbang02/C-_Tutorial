#include <iostream>
#include <algorithm>

using namespace std;

// bai319. Viết hàm sắp xếp ma trận các số thực tăng dần
// từ trên xuống dưới và từ trái sang phải.

void SapXep(float a[][100], int n, int m)
{
    int k = 0;
    float b[1000];
    int size = n * m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            b[k++] = a[i][j];
        }
    }
    sort(b, b + size);

    k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = b[k++];
        }
    }
}

void XuatMaTran(float a[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
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
    SapXep(a, n, m);
    XuatMaTran(a, n, m);
    return 0;
}