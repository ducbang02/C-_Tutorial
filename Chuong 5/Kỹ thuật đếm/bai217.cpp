#include <iostream>
using namespace std;

// Bài 217: Đếm số lượng giá trị dương chia hết cho 7 trong mảng một
// chiều các số nguyên (demchiahetbay).

int Dem(int array[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 7 == 0 && array[i] > 0)
        {
            dem++;
        }
    }
    return dem;
}

int main()
{
    int n = 6;
    int arr[n] = {2, 5, -7, 14, 15, 49};
    cout << "So luong so duong chia het cho 7 la: " << Dem(arr, n);
    return 0;
}
