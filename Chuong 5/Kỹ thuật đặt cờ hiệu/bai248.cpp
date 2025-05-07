#include <iostream>
using namespace std;

// bai247. Hãy kiểm tra mảng có tăng dần hay không? (kttang).
int KiemTra(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n = 6;
    int array[n] = {2, 3, 5, 7, 9, 10};

    cout << "Ket Qua: " << KiemTra(array, n);

    return 0;
}