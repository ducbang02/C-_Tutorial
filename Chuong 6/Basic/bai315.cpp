#include <iostream>

using namespace std;

// bai315. Viết hàm tìm giá trị lớn nhất trong ma trận các số thực.

float FindMax(float a[100][100], int n, int m)
{
    float max = a[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }
    return max;
}

void NhapMaTran(float a[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
}

int main()
{
    int n;
    int m;
    cin >> n;
    cin >> m;
    float a[100][100];
    NhapMaTran(a, n, m);
    cout << "So lon nhat trong ma tran la: " << FindMax(a, n, m);

    return 0;
}