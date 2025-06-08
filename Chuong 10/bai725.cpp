#include <iostream>
using namespace std;

// 725. Cho mảng một chiều các số thực. Hãy viết hàm đệ quy kiểm tra mảng
// có thỏa mãn tính chất “toàn giá trị âm”.

bool KiemTraGiaTriAm(float a[], int n)
{
    if (n == 0)
        return true;
    if (a[n - 1] > 0)
    {
        return false;
    }

    return KiemTraGiaTriAm(a, n - 1);
}

int main()
{
    float arr[] = {-1, -2, -5, -4, -5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Ktra mang toan gia tri am: " << KiemTraGiaTriAm(arr, n) << endl;

    return 0;
}
