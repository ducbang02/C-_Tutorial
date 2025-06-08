#include <bits/stdc++.h>

using namespace std;

// bai342. (*) Đếm số lượng phần tử cực đại trong ma trận các số thực.
// Một phần tử được gọi là cực đại khi nó lớn hơn các phần tử xung quanh

bool isLocalMax(const vector<vector<double>> &matrix, int i, int j, int rows, int cols)
{
    double current = matrix[i][j];

    // Duyệt qua 8 ô xung quanh
    for (int di = -1; di <= 1; ++di)
    {
        for (int dj = -1; dj <= 1; ++dj)
        {
            // Bỏ qua chính nó
            if (di == 0 && dj == 0)
                continue;

            int ni = i + di;
            int nj = j + dj;

            // Kiểm tra chỉ số hợp lệ
            if (ni >= 0 && ni < rows && nj >= 0 && nj < cols)
            {
                if (matrix[ni][nj] >= current)
                    return false; // Không phải cực đại nếu có phần tử xung quanh lớn hơn hoặc bằng
            }
        }
    }

    return true;
}

int main()
{
    int rows = 4;
    int cols = 5;
    vector<vector<double>> matrix = {
        {1, 3, 2, 1, 0},
        {4, 5, 6, 5, 2},
        {7, 8, 9, 8, 3},
        {1, 2, 3, 4, 1}};

    // Đếm phần tử cực đại
    int countMax = 0;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            if (isLocalMax(matrix, i, j, rows, cols))
            {
                countMax++;
            }
        }
    }

    cout << "So luong phan tu cuc dai trong ma tran la: " << countMax << endl;

    return 0;
}