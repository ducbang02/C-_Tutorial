#include <iostream>
#include <vector>

using namespace std;
// 440.Tính tổng các phần tử trên đường chéo phu.
float TongDuongCheoPhu(vector<vector<float>> mt)
{
    int n = mt.size();
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += mt[i][n - i - 1];
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

    cout << TongDuongCheoPhu(mt);

    return 0;
}