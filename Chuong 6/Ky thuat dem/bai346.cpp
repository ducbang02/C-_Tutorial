#include <bits/stdc++.h>

using namespace std;

// 346.(*) Đếm số lượng giá trị “Hoàng Hậu” trên ma trận. Một phần tử được
// gọi là Hoàng Hậu khi nó lớn nhất trên dòng, trên cột và hai đường chéo
// đi qua nó

// Hàm kiểm tra chỉ số nằm trong ma trận
bool isValid(int i, int j, int m, int n)
{
    return i >= 0 && i < m && j >= 0 && j < n;
}

int main()
{
    // Ma trận ví dụ (4x5)
    vector<vector<double>> a = {
        {1, 2, 3, 4, 5},
        {5, 9, 2, 1, 4},
        {3, 4, 10, 2, 3},
        {1, 2, 3, 8, 1}};

    int m = a.size();
    int n = a[0].size();
    int count = 0;

    // Duyệt từng phần tử
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            double val = a[i][j];
            bool isQueen = true;

            // Kiểm tra hàng
            for (int col = 0; col < n; ++col)
            {
                if (col != j && a[i][col] > val)
                {
                    isQueen = false;
                    break;
                }
            }

            // Kiểm tra cột
            if (isQueen)
            {
                for (int row = 0; row < m; ++row)
                {
                    if (row != i && a[row][j] > val)
                    {
                        isQueen = false;
                        break;
                    }
                }
            }

            // Kiểm tra đường chéo chính ↘
            if (isQueen)
            {
                for (int k = -min(i, j); k <= min(m - 1 - i, n - 1 - j); ++k)
                {
                    if (k != 0 && a[i + k][j + k] > val)
                    {
                        isQueen = false;
                        break;
                    }
                }
            }

            // Kiểm tra đường chéo phụ ↙
            if (isQueen)
            {
                for (int k = -min(i, n - 1 - j); k <= min(m - 1 - i, j); ++k)
                {
                    if (k != 0 && a[i + k][j - k] > val)
                    {
                        isQueen = false;
                        break;
                    }
                }
            }

            if (isQueen)
                count++;
        }
    }

    cout << "So luong gia tri Hoang Hau: " << count << endl;

    return 0;
}
