#include <iostream>

using namespace std;
// bai255. Hãy sắp xếp các giá trị trong mảng các số thực tăng dần (sapxeptang).
void SapXep(float array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (array[i] < array[j])
            {
                float temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
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
    int n = 6;
    float array[n];
    NhapMang(array, n);
    SapXep(array, n);
    XuatMang(array, n);

    return 0;
}