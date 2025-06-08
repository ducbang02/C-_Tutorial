#include <bits/stdc++.h>

using namespace std;
// bai 392. Hoán vị hai dòng trên ma trận.
void HoanViDongMaTran(vector<vector<float>> &mt, int n = 1, int m = 2)
{
    vector<float> temp;
    int k = 0;
    int soCot = mt[0].size();
    for (int i = 0; i < soCot; i++)
    {
        temp.push_back(mt[n - 1][i]);
    }
    for (int i = 0; i < soCot; i++)
    {
        mt[n - 1][i] = mt[m - 1][i];
    }
    for (int i = 0; i < soCot; i++)
    {
        mt[m - 1][i] = temp[i];
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
    HoanViDongMaTran(mt);
    XuatMaTran(mt);

    return 0;
}