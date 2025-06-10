#include <iostream>
#include <vector>

using namespace std;
// 438.Tính tổng các phần tử thuộc ma trận tam giác trên (không tính đường
// chéo) trong ma trận vuông các số thực.
float TongTamGiacTren(vector<vector<float>> mt)
{
    int n = mt.size();
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            sum += mt[i][j];
        }
    }
    return sum;
}

int main()
{
    vector<vector<float>> mt = {
        {4, 5, 1, 8},
        {7, 6, 2, 9},
        {3, 4, 7, 1},
        {9, 8, 5, 3}};

    cout << TongTamGiacTren(mt);

    return 0;
}