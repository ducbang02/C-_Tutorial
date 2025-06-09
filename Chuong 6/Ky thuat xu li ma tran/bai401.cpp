#include <bits/stdc++.h>

using namespace std;
// 401. Xóa một cot trong ma trận.

void RemoveColumn(vector<vector<float>> &mt, int column = 2)
{
    int soDong = mt.size();
    int soCot = mt[0].size();

    for (int i = 0; i < soDong; i++)
    {
        mt[i].erase(mt[i].begin() + column - 1);
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
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 1, 8, 6},
        {3, 4, 5, 7}};

    XuatMaTran(mt);
    RemoveColumn(mt);
    XuatMaTran(mt);

    return 0;
}