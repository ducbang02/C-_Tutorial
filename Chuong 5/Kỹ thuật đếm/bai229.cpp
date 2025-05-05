#include <iostream>
using namespace std;

// bai229. Hãy đếm số lượng các giá trị phân biệt có trong mảng (demphanbiet).

int Dem(float array[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        bool new_varible = true;
        for (int j = 0; j < i; j++)
        {
            if (array[i] == array[j])
            {
                new_varible = false;
                break;
            }
        }

        if (new_varible)
        {
            dem++;
        }
    }
    return dem;
}

int main()
{
    int n = 11;
    float arr[n] = {2, 5, -7, 14, 15, 49, 49, 5, -7, 2, 5};
    cout << "So luong phan tu phan biet trong mang la: " << Dem(arr, n);
    return 0;
}
