#include <iostream>
using namespace std;

// Bài 220: Hãy đếm số lượng giá trị có chữ số tận cùng bằng 5
// trong mảng các số nguyên (demtancung).

int Dem(int array[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 10 == 5)
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
    cout << "So luong so co chu so tan cung = 5: " << Dem(arr, n);
    return 0;
}
