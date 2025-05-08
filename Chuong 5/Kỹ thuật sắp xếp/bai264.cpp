#include <iostream>

using namespace std;
// 264. Hãy trộn hai mảng tăng dần lại thành 1 mảng được sắp
// thứ tự tăng dần (tronmangtang).
void TronMang(float arrayA[], int n, float arrayB[], int m, float arrayC[], int &k)
{
    int i = 0, j = 0;
    k = 0;

    while (i < n && j < m)
    {
        if (arrayA[i] < arrayB[j])
        {
            arrayC[k++] = arrayA[i++];
        }
        else
        {
            arrayC[k++] = arrayB[j++];
        }
    }

    while (i < n)
    {
        arrayC[k++] = arrayA[i++];
    }
    while (j < m)
    {
        arrayC[k++] = arrayB[j++];
    }
}

void NhapMang(float array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
}

void XuatMang(float array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}

int main()
{
    int n = 4;
    int m = 5;
    int k = n + m;
    // float array[n];
    float arrayA[n] = {6.7, 9.5, 10.4, 56.7};
    float arrayB[m] = {15, 22, 58, 99, 78};
    float arrayC[k];
    // NhapMang(array, n);
    TronMang(arrayA, n, arrayB, m, arrayC, k);
    XuatMang(arrayC, k);

    // XuatMang(arrayA, n);

    return 0;
}