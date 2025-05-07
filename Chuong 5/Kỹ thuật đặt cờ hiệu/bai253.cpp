#include <iostream>
using namespace std;

// bai253. Hãy cho biết tất cả các phần tử trong mảng a có nằm trong mảng b hay không?

int KiemTra(int a[], int n, int b[], int m)
{
    for (int i = 0; i < n; i++)
    {
        bool found = false;
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[i])
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n = 6;
    int m = 7;
    int arrayA[n] = {1, 3, 5, 7, 8, 15};
    int arrayB[n] = {1, 3, 5, 7, 9, 15, 0};

    cout << "Ket Qua: " << KiemTra(arrayA, n, arrayB, m);

    return 0;
}