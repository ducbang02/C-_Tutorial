#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
// 458.Kiểm tra ma trận có đối xứng qua đường chéo phụ hay không.

bool KTDoiXungCheoPhu(vector<vector<float>> mt)
{
    int size = mt.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (mt[i][j] != mt[size - 1 - j][size - 1 - i])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    vector<vector<float>> mt = {
        {4, -50, 3, -9},
        {-7, 6, -2, 3},
        {3, -40, 6, -50},
        {-9, 3, -7, -4}};

    cout << KTDoiXungCheoPhu(mt);
    return 0;
}