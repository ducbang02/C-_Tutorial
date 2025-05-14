#include <iostream>
#include <vector>

using namespace std;
// 287. Hãy “dịch phải xoay vòng” k lần các phần tử trong mảng (dichphai).
void DichPhai(int a[], int n)
{
    int temp = a[n - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = temp;
}

void DichPhaiNhieuLan(int a[], int n, int k)
{
    for (int i = 0; i < k; i++)
    {
        DichPhai(a, n);
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
    int a[] = {2, 3, 4, 5, 6};
    int n = sizeof(a) / sizeof(a[0]);
    int k = 3;
    cout << "Mang ban dau: ";
    XuatMang(a, n);

    DichPhaiNhieuLan(a, n, k);

    cout << "Mang sau khi dich phai xoay vong k lan la: ";
    XuatMang(a, n);

    return 0;
}