#include <bits/stdc++.h>

using namespace std;
// bai 393. Hoán vị hai cot trên ma trận.

void HoanViCotMaTran(vector<vector<float>> &mt, int c1 = 1, int c2 = 2)
{
    int soDong = mt.size();

    for (int i = 0; i < soDong; i++)
    {
        swap(mt[i][c1 - 1], mt[i][c2 - 1]);
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
    HoanViCotMaTran(mt);
    XuatMaTran(mt);

    return 0;
}