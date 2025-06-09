#include <bits/stdc++.h>

using namespace std;
// 400.Xóa một dòng trong ma trận.

void RemoveRow(vector<vector<float>> &mt, int row = 2)
{
    int soDong = mt.size();
    int soCot = mt[0].size();

    mt.erase(mt.begin() + row - 1);
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
    RemoveRow(mt);
    XuatMaTran(mt);

    return 0;
}