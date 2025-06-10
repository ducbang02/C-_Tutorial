#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
// 449. (*) Cho ma trận vuông A(n x n) các số thực. Hãy tìm ma trận vuông B (
// k x k) sao cho tổng các giá trị trên ma trận vuông này là lớn nhất.
#include <iostream>
#include <vector>
#include <limits>

using namespace std;

// Hàm tìm ma trận k x k có tổng lớn nhất
void TimMaTranConMaxTong(const vector<vector<float>> &A, int n, int k)
{
    float maxSum = -numeric_limits<float>::infinity(); // Khởi tạo tổng lớn nhất rất nhỏ
    int max_i = 0, max_j = 0;

    for (int i = 0; i <= n - k; i++)
    {
        for (int j = 0; j <= n - k; j++)
        {
            float currentSum = 0;

            // Tính tổng ma trận con k x k bắt đầu từ (i, j)
            for (int x = i; x < i + k; x++)
            {
                for (int y = j; y < j + k; y++)
                {
                    currentSum += A[x][y];
                }
            }

            if (currentSum > maxSum)
            {
                maxSum = currentSum;
                max_i = i;
                max_j = j;
            }
        }
    }

    // In kết quả
    cout << "Tong lon nhat: " << maxSum << endl;
    cout << "Ma tran con " << k << "x" << k << " co tong lon nhat:\n";
    for (int i = max_i; i < max_i + k; i++)
    {
        for (int j = max_j; j < max_j + k; j++)
        {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int n, k;
    cout << "Nhap kich thuoc ma tran vuong n: ";
    cin >> n;

    cout << "Nhap kich thuoc ma tran con k: ";
    cin >> k;

    vector<vector<float>> A(n, vector<float>(n));
    cout << "Nhap cac phan tu cua ma tran A (" << n << "x" << n << "):\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }

    TimMaTranConMaxTong(A, n, k);

    return 0;
}
