#include <bits/stdc++.h>

using namespace std;
// 398.Dịch phải xoay vòng theo chiều kim đồng hồ các giá trị nằm trên biên
// ma trận.

void XoayKimDongHoBien(vector<vector<float>> &mt)
{
    int m = mt.size();    // số dòng
    int n = mt[0].size(); // số cột

    if (m <= 1 || n <= 1)
        return; // không xoay được nếu ma trận quá nhỏ

    float temp = mt[0][0];

    // Dịch hàng đầu tiên sang phải
    for (int j = 0; j < n - 1; j++)
        mt[0][j] = mt[0][j + 1];

    // Dịch cột phải xuống dưới
    for (int i = 0; i < m - 1; i++)
        mt[i][n - 1] = mt[i + 1][n - 1];

    // Dịch hàng cuối sang trái
    for (int j = n - 1; j > 0; j--)
        mt[m - 1][j] = mt[m - 1][j - 1];

    // Dịch cột trái lên trên
    for (int i = m - 1; i > 1; i--)
        mt[i][0] = mt[i - 1][0];

    mt[1][0] = temp;
}

void XuatMaTran(vector<vector<float>> mt)
{
    for (auto row : mt)
    {
        for (auto var : row)
        {
            cout << var << " ";
        }
        cout << "\n";
    }
}

int main()
{
    vector<vector<float>> mt = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    XuatMaTran(mt);
    XoayKimDongHoBien(mt);
    XuatMaTran(mt);

    return 0;
}