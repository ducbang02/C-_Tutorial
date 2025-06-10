#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
// 450.Đếm số lượng cặp giá trị đối xứng nhau qua đường chéo chính.

int DemDoiXung(vector<vector<float>> mt)
{
    int dem = 0;
    int size = mt.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (mt[i][j] == mt[j][i])
            {
                dem++;
            }
        }
    }
    return dem;
}

int main()
{
    vector<vector<float>> mt = {
        {4, -50, 3, -9},
        {-7, 6, -2, -90},
        {3, -40, 7, -100},
        {-9, 8, -5, -30}};

    cout << "số lượng cặp giá trị đối xứng nhau qua đường chéo chính la: " << DemDoiXung(mt);

    return 0;
}