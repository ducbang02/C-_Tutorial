#include <iostream>

using namespace std;
// 257. Hãy sắp xếp các giá trị tại các vị trí lẻ trong mảng tăng dần
// các giá trị khác giữ nguyên giá trị và vị trí (vitritletang).
void SapXep(float array[], int n)
{
    for (int i = 1; i < n; i += 2)
    {
        for (int j = 1; j < i; j += 2)
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
    int n = 10;
    float array[n];
    NhapMang(array, n);
    SapXep(array, n);
    XuatMang(array, n);

    return 0;
}