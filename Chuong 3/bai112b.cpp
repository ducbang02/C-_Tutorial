
#include <iostream>
using namespace std;

// Bài 112: In hình chữ nhật rỗng kích thước m x n
int main()
{
    int m, n;
    cout << "Nhap chieu dai m va chieu rong n: ";
    cin >> m >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (j == 1 || j == m || i == 1 || i == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
