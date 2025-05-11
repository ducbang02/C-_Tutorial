#include <iostream>

using namespace std;
// 269. Hãy thêm một giá trị x vào trong mảng tăng dần mà vẫn giữ nguyên tính
// đơn điệu tăng của mảng (thembaotoan).
void ThemX(float a[], int &n, float x)
{
    int k = n;
    for (int i = 0; i < n; i++)
    {
        if (x < a[i])
        {
            k = i;
            break;
        }
    }

    for (int i = n; i > k; i--)
    {
        a[i] = a[i - 1];
    }

    a[k] = x;
    n++;
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
    int n = 6;
    float a[n] = {5.9, 7.5, 7.6, 8.9, 14.1, 17};
    cout << "mang ban dau: ";
    XuatMang(a, n);
    int x = 8;
    ThemX(a, n, x);
    cout << "\nMang sau khi them x: ";
    XuatMang(a, n);
    return 0;
}