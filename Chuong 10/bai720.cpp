#include <iostream>

using namespace std;
// 720.Cho mảng một chiều các số thực. Hãy viết hàm đệ quy đếm số lượng
// giá trị dương có trong mảng.
int DemTong(float a[], int n)
{
    if (n == 0)
        return 0;
    if (a[n - 1] > 0)
    {
        return 1 + DemTong(a, n - 1);
    }
    else
    {
        return DemTong(a, n - 1);
    }
}

int main()
{
    float a[] = {1, -3, 5, -7, 9, -11};
    cout << DemTong(a, 6);

    return 0;
}