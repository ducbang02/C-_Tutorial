#include <iostream>

using namespace std;
// 281. Hãy đưa các số chẵn trong mảng về đầu mảng, số lẻ về cuối mảng
// và các phần tử 0 nằm ở giữa (chandaulecuoi).
void ChanDauLeCuoi(int array[], int n)
{
    int dem0 = 0;
    int tempChan[n];
    int c = 0;
    int tempLe[n];
    int l = 0;

    for (int i = 0; i < n; i++)
    {
        if (array[i] == 0)
        {
            dem0++;
        }
        else if (array[i] % 2 == 0)
        {
            tempChan[c++] = array[i];
        }
        else
        {
            tempLe[l++] = array[i];
        }
    }

    for (int i = 0; i < c; i++)
    {
        array[i] = tempChan[i];
    }

    for (int i = 0; i < dem0; i++)
    {
        array[i + c] = 0;
    }

    for (int i = 0; i < l; i++)
    {
        array[i + c + dem0] = tempLe[i];
    }
}

void XuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main()
{
    int a[] = {3, 4, 5, 2, 0};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Mang ban dau: ";
    XuatMang(a, n);

    ChanDauLeCuoi(a, n);

    cout << "Mang sau khi xep chan dau, 0 giua, le cuoi: ";
    XuatMang(a, n);

    return 0;
}