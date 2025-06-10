#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
// 448.Tìm hai giá trị gần nhau nhất trong ma trận
pair<float, float> TimHaiGiaTriGanNhat(vector<vector<float>> mt)
{
    int soDong = mt.size();
    int soCot = mt[0].size();
    int size = soDong * soCot;
    float temp[size];
    int k = 0;
    for (auto rows : mt)
    {
        for (auto var : rows)
        {
            temp[k++] = var;
        }
    }

    sort(temp, temp + size);

    float minKC = temp[1] - temp[0];
    float val1 = temp[0];
    float val2 = temp[1];
    for (int i = 1; i < size - 1; i++)
    {
        if (temp[i + 1] - temp[i] < minKC)
        {
            minKC = temp[i + 1] - temp[i];
            val1 = temp[i];
            val2 = temp[i + 1];
        }
    }
    pair<float, float> resul = {val1, val2};
    return resul;
}

int main()
{
    vector<vector<float>> mt = {
        {4, -50, 1, -80},
        {-7, 6, -2, -90},
        {3, -40, 7, -100},
        {-9, 8, -5, -30}};

    pair<float, float> result = TimHaiGiaTriGanNhat(mt);
    cout << result.first << " " << result.second;

    return 0;
}