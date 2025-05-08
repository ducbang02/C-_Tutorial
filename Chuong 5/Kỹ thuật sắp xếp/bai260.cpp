#include <iostream>

using namespace std;
// 260. Cho hai mảng a, b. Hãy cho biết mảng b có phải là hoán vị của mảng a
// hay không? (kthoanvi).
bool KTHoanVi(float arrayA[], int n, float arrayB[], int m)
{
    if (m != n)
        return false;
    for (int i = 0; i < n; i++)
    {
        // cout << "for1";
        bool kiemTra = false;
        for (int j = 0; j < m; j++)
        {
            // cout << "for2";
            if (arrayA[i] == arrayB[j])
            {
                kiemTra = true;
                // cout << "if";
                break;
            }
        }

        if (!kiemTra)
            return false;
    }
    return true;
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
    int n = 5;
    int m = 5;
    // float array[n];
    float arrayA[n] = {65.5, 10, 6.7, 9.5, 10.4};
    float arrayB[n] = {10, 6.7, 9, 10.4, 65.5};
    // NhapMang(array, n);
    cout << KTHoanVi(arrayA, n, arrayB, m);
    // XuatMang(array, n);

    return 0;
}