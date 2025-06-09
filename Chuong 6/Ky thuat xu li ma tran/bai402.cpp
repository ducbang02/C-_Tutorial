#include <bits/stdc++.h>

using namespace std;
// 402.Xoay ma trận một góc 90 độ.

void Xoay90Do(vector<vector<float>> &mt)
{
    int soDong = mt.size();
    int soCot = mt[0].size();
    vector<float> temp;

    for (int j = 0; j < soCot; j++)
    {
        for (int i = soDong - 1; i >= 0; i--)
        {
            temp.push_back(mt[i][j]);
        }
        cout << "\n";
    }
    int k = 0;
    for (int i = 0; i < soDong; i++)
    {
        for (int j = 0; j < soCot; j++)
        {
            mt[i][j] = temp[k++];
        }
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
        {5, 6, 7, 8},
        {3, 4, 5, 7}};

    XuatMaTran(mt);
    Xoay90Do(mt);
    XuatMaTran(mt);

    return 0;
}