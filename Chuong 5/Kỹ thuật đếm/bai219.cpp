#include <iostream>
using namespace std;

// Bài 219: Đếm số lần xuất hiện của giá trị x trong mảng
// một chiều các số thực (tanxuat).

int Dem(float array[], int n, float x)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == x)
        {
            dem++;
        }
    }
    return dem;
}

int main()
{
    int n = 6;
    float arr[n] = {2, 5, -7, 5, 15, 49};
    float x = 5;
    cout << "So luong so bang x la: " << Dem(arr, n, x);
    return 0;
}
