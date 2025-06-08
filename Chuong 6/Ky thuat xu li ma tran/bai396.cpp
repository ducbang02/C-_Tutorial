#include <bits/stdc++.h>

using namespace std;
// 396.Dịch trái xoay vòng các cột trong ma trận.

void DichTraiXoayVong(vector<vector<float>> &mt)
{
    int soDong = mt.size();
    int soCot = mt[0].size();
    vector<float> temp;
    for (int i = 0; i < soCot; i++)
    {
        temp.push_back(mt[i][0]);
    }

    for (int j = 0; j < soCot - 1; j++)
    {
        for (int i = 0; i < soDong; i++)
        {
            mt[i][j] = mt[i][j + 1];
        }
    }

    for (int i = 0; i < soCot; i++)
    {
        mt[i][soCot - 1] = temp[i];
    }
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
    DichTraiXoayVong(mt);
    XuatMaTran(mt);

    return 0;
}