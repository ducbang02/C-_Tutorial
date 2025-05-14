#include <iostream>
#include <vector>

using namespace std;
// 286. Hãy “dịch trái xoay vòng” các phần tử trong mảng (dichtrai).
void DichTrai(int a[], int n)
{
    int temp = a[0];
    for (int i = 1; i < n; i++)
    {
        a[i - 1] = a[i];
    }
    a[n - 1] = temp;
}

void XuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main()
{
    int a[] = {2, 3, 4, 5, 6};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Mang ban dau: ";
    XuatMang(a, n);

    DichTrai(a, n);

    cout << "Mang sau khi dich trai xoay vong la: ";
    XuatMang(a, n);

    return 0;
}