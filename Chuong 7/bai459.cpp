#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;
// 459.Kiểm tra ma trận có phải là ma phương bậc n không ?

bool KTMaPhuong(const vector<vector<int>> &mt)
{
    int n = mt.size();
    if (n == 0)
        return false;

    unordered_set<int> se;
    for (const auto &row : mt)
    {
        if (row.size() != n)
            return false; // ma trận không vuông
        for (int val : row)
        {
            if (val < 1 || val > n * n)
                return false;
            se.insert(val);
        }
    }
    if (se.size() != n * n)
        return false;

    int HangSo = n * (n * n + 1) / 2;

    for (int i = 0; i < n; i++)
    {
        int sumRow = 0, sumCol = 0;
        for (int j = 0; j < n; j++)
        {
            sumRow += mt[i][j];
            sumCol += mt[j][i];
        }
        if (sumRow != HangSo || sumCol != HangSo)
            return false;
    }

    int diag1 = 0, diag2 = 0;
    for (int i = 0; i < n; i++)
    {
        diag1 += mt[i][i];
        diag2 += mt[i][n - 1 - i];
    }

    return diag1 == HangSo && diag2 == HangSo;
}

int main()
{
    vector<vector<int>> mt = {
        {4, -50, 3, -9},
        {-7, 6, -2, 3},
        {3, -40, 6, -50},
        {-9, 3, -7, -4}};

    vector<vector<int>> mp3 = {
        {8, 1, 6},
        {3, 5, 7},
        {4, 9, 2}};

    vector<vector<int>> mp4 = {
        {16, 2, 3, 13},
        {5, 11, 10, 8},
        {9, 7, 6, 12},
        {4, 14, 15, 1}};

    vector<vector<int>> mp5 = {
        {17, 24, 1, 8, 15},
        {23, 5, 7, 14, 16},
        {4, 6, 13, 20, 22},
        {10, 12, 19, 21, 3},
        {11, 18, 25, 2, 9}};

    cout << KTMaPhuong(mt) << endl;
    cout << KTMaPhuong(mp3) << endl;
    cout << KTMaPhuong(mp4) << endl;
    cout << KTMaPhuong(mp5) << endl;

    return 0;
}