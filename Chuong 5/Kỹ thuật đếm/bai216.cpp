#include <iostream>
using namespace std;

// Bài 216: Đếm số lượng số chẵn có trong mảng một chiều các số nguyên (demchan).

int DemSoChan(int array[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            dem++;
        }
    }
    return dem;
}

int main()
{
    int n = 6;
    int arr[n] = {2, 5, 8, 9, 15, 48};
    cout << "So luong so chan la: " << DemSoChan(arr, n);
    return 0;
}
