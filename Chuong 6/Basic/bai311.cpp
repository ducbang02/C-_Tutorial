#include <iostream>

using namespace std;

// bai311. Hàm nhập ma trận các số nguyên.
void NhapMaTran(int a[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
}

void XuatMaTran(int a[][100], int n, int m)
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
    int n;
    int m;
    cin >> n;
    cin >> m;
    int a[100][100];
    NhapMaTran(a, n, m);
    XuatMaTran(a, n, m);

    return 0;
}