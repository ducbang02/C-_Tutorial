#include <iostream>
using namespace std;

// bai246. Hãy kiểm tra mảng một chiều các số thực có đối xứng hay không? (ktdoixung).
int KiemTra(float a[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        if (a[i] != a[n - 1 - i])
        {
            return 0; // Không đối xứng
        }
    }
    return 1; // Đối xứng
}

int main()
{
    int n = 6;
    float array[n] = {2, 2, 2, 2, 2, 0};

    cout << "Ket Qua: " << KiemTra(array, n);

    return 0;
}