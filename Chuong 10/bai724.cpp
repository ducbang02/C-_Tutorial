#include <iostream>
using namespace std;

// 724. Cho mảng một chiều các số thực. Hãy viết hàm đệ quy tính tích các
// giá trị lớn hơn giá trị đứng trước nó trong mảng.

float TinhTong(float a[], int n)
{
    if (n == 1)
        return 0;
    if (a[n - 1] > a[n - 2])
    {
        return a[n - 1] + TinhTong(a, n - 1);
    }
    else
    {
        return TinhTong(a, n - 1);
    }
}

int main()
{
    float arr[] = {1, 2, 5, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Tong cac gia tri lon hon gia tri dung truoc no: " << TinhTong(arr, n) << endl;

    return 0;
}
