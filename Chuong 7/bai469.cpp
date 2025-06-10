#include <iostream>
#include <vector>

using namespace std;
// 469.Tính tổng hai ma trận.
vector<vector<float>> AddMatrix(vector<vector<float>> mt1, vector<vector<float>> mt2)
{
    int soDong1 = mt1.size();
    int soDong2 = mt2.size();
    int soCot1 = mt1[0].size();
    int soCot2 = mt2[0].size();
    if (soDong1 != soDong2 || soCot1 != soCot2)
    {
        cout << "Phep cong k hop le.";
        return {};
    }
    vector<vector<float>> mt(soDong1, vector<float>(soCot1));
    for (int i = 0; i < soDong1; i++)
    {
        for (int j = 0; j < soCot1; j++)
        {
            mt[i][j] = mt1[i][j] + mt2[i][j];
        }
    }
    return mt;
}

// 470.Tính hieu hai ma trận.
vector<vector<float>> DiffMatrix(vector<vector<float>> mt1, vector<vector<float>> mt2)
{
    int soDong1 = mt1.size();
    int soDong2 = mt2.size();
    int soCot1 = mt1[0].size();
    int soCot2 = mt2[0].size();
    if (soDong1 != soDong2 || soCot1 != soCot2)
    {
        cout << "Phep tru k hop le.";
        return {};
    }
    vector<vector<float>> mt(soDong1, vector<float>(soCot1));
    for (int i = 0; i < soDong1; i++)
    {
        for (int j = 0; j < soCot1; j++)
        {
            mt[i][j] = mt1[i][j] - mt2[i][j];
        }
    }
    return mt;
}

// 471.Tính tích hai ma trận.
vector<vector<float>> MutilMatrix(vector<vector<float>> mt1, vector<vector<float>> mt2)
{
    int soDong1 = mt1.size();
    int soDong2 = mt2.size();
    int soCot1 = mt1[0].size();
    int soCot2 = mt2[0].size();
    if (soCot1 != soDong2)
    {
        cout << "Phep nhan k hop le.";
        return {};
    }
    vector<vector<float>> mt(soDong1, vector<float>(soCot2));
    for (int i = 0; i < soDong1; i++)
    {
        for (int j = 0; j < soCot2; j++)
        {
            for (int t = 0; t < soCot1; t++)
            {
                mt[i][j] += mt1[i][t] * mt2[t][j];
            }
        }
    }
    return mt;
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
        {4, -50, 3, -9},
        {-7, 6, -2, 3},
        {3, -40, 6, -50},
        {-9, 3, -7, -4}};

    vector<vector<float>> mt2 = {
        {8, 1, 6},
        {3, 5, 7},
        {4, 9, 2}};

    vector<vector<float>> mt3 = {
        {2, 1, 6},
        {3, 5, 7},
        {4, 9, 2}};

    vector<vector<float>> mt4 = MutilMatrix(mt2, mt3);
    XuatMaTran(mt4);
    return 0;
}