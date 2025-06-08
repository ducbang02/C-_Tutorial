#include <iostream>
using namespace std;

// 722. Cho mảng một chiều các số thực. Hãy viết hàm đệ quy tính tổng
// các giá trị có trong mảng.

float TinhTong(float a[], int n)
{
    if (n == 0)
        return 0;
    return a[n - 1] + TinhTong(a, n - 1);
}

int main()
{
    float arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Tong cac gia tri trong mang: " << TinhTong(arr, n) << endl;

    return 0;
}
