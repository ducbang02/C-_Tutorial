#include <iostream>
using namespace std;

// 726. Cho mảng một chiều các số thực. Hãy viết hàm đệ quy
// tìm giá trị lớn nhất có trong mảng.

float FindMax(float a[], int n)
{
    if (n == 1)
        return a[0]; // chỉ còn 1 phần tử → đó là max

    float maxRest = FindMax(a, n - 1); // tìm max trong phần đầu
    return (a[n - 1] > maxRest) ? a[n - 1] : maxRest;
}

int main()
{
    float arr[] = {-1, -2, 5, -4, -5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "So lon nhat trong mang: " << FindMax(arr, n) << endl;

    return 0;
}
