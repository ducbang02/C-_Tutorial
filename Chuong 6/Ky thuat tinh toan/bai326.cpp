#include <iostream>
#include <algorithm>

using namespace std;

// bai326. Tính trung bình cộng các số dương trong ma trận các số thực.
float TinhTBC(float a[][100], int n, int m)
{
    float tong = 0;
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] > 0)
            {
                tong += a[i][j];
                dem++;
            }
        }
    }
    if (dem == 0)
    {
        return 0; // hoặc return NAN nếu bạn muốn báo kết quả không xác định
    }
    return tong / dem;
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
    cout << "TBC mang so thuc la: " << TinhTBC(a, n, m);
    return 0;
}