#include <bits/stdc++.h>

using namespace std;
// 394.Dịch xuống xoay vòng các hàng trong ma trận.

void DichXuongXoayVong(vector<vector<float>> &mt)
{
    int soDong = mt.size();
    int soCot = mt[0].size();
    vector<float> temp = mt[soDong - 1];
    for (int i = soDong - 1; i > 0; i--)
    {
        for (int j = 0; j < soCot; j++)
        {
            mt[i][j] = mt[i - 1][j];
        }
    }
    mt[0] = temp;
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
        {4, 5, 1, 8},
        {7, 6, 2, 9},
        {3, 4, 7, 1},
        {9, 8, 5, 3}};

    XuatMaTran(mt);
    DichXuongXoayVong(mt);
    XuatMaTran(mt);

    return 0;
}