#include <iostream>
#include <cmath> // Để dùng round()

using namespace std;

// 292. Hãy biến đổi mảng bằng cách thay tất cả các phần tử trong mảng
// bằng số nguyên gần nó nhất (nguyengannhat).

void BienDoiGanNhat(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = round(a[i]);
    }
}

void XuatMang(float a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main()
{
    float a[] = {1.2, 3.5, -2.8, 7.9, -3.1};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Mang ban dau: ";
    XuatMang(a, n);

    BienDoiGanNhat(a, n);

    cout << "Mang sau khi bien doi: ";
    XuatMang(a, n);

    return 0;
}
