#include <iostream>

using namespace std;
// 280. Hãy đưa số một về đầu mảng (motvedau).
void MotVeDau(int array[], int n)
{
    int dem1 = 0;
    int temp[n];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == 1)
        {
            dem1++;
        }
        else
        {
            temp[j++] = array[i];
        }
    }

    for (int i = 0; i < dem1; i++)
    {
        array[i] = 1;
    }

    for (int i = 0; i < j; i++)
    {
        array[dem1 + i] = temp[i];
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
    int a[] = {3, 4, 5, 2};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Mang ban dau: ";
    XuatMang(a, n);

    MotVeDau(a, n);

    cout << "Mang sau khi dua so 1 ve dau: ";
    XuatMang(a, n);

    return 0;
}