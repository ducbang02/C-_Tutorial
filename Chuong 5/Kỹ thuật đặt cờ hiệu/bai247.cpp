#include <iostream>
using namespace std;

// bai247. Ta định nghĩa một mảng có tính chẵn lẻ, khi tổng của hai
// phần tử liên tiếp trong mảng luôn luôn là số lẻ. Hãy viết hàm kiểm tra
// mảng a có tính chẵn lẻ hay không? (ktchanle).
int KiemTra(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if ((a[i] + a[i + 1]) % 2 == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n = 6;
    int array[n] = {2, 3, 2, 3, 2, 3};

    cout << "Ket Qua: " << KiemTra(array, n);

    return 0;
}