#include <iostream>
#include <algorithm>

using namespace std;

// bai329. Hãy biến đổi ma trận bằng cách thay các giá trị âm bằng trị tuyệt đối của nó.
void BienDoi(float a[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] < 0)
            {
                a[i][j] = -a[i][j];
            }
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
        {1, -1, -1, -1},
        {-1, -1, -2, -1},
        {-1, -16, -3, 1},
        {-1, -1, -1, -2}};
    BienDoi(a, n, m);
    XuatMaTran(a, n, m);
    return 0;
}