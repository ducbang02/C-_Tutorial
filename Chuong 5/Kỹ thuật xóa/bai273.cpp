#include <iostream>

using namespace std;
// bai273. Hãy xóa tất cả các số âm trong mảng các số thực (xoaaam).
void XoaAm(float array[], int &n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] >= 0)
        {
            array[j] = array[i];
            j++;
        }
    }
    n = j;
}

void XuatMang(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int n = 8;
    float a[n] = {-5.9, -8.9, -2.5, 3.6, -8.9, -4.1, 7, -8.9};
    cout << "mang ban dau: ";
    XuatMang(a, n);
    XoaAm(a, n);
    cout << "\nMang sau khi xoa so am: ";
    XuatMang(a, n);
    return 0;
}