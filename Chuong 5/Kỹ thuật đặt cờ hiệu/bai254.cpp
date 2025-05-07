#include <iostream>
using namespace std;

// bai254. Hãy cho số lượng giá trị trong mảng thỏa tính chất:
// “lớn hơn tất cả các giá trị đứng đằng sau nó”.

int KiemTra(int a[], int n)
{
    int dem = 1;
    int maxRight = a[n - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] > maxRight)
        {
            maxRight = a[i];
            dem++;
        }
    }
    return dem;
}

int main()
{
    int n = 6;
    int arrayA[n] = {1, 3, 15, 9, 8, 4};

    cout << "Ket Qua: " << KiemTra(arrayA, n);

    return 0;
}