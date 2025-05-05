#include <iostream>
#include <cmath> // để dùng hàm abs
using namespace std;

// bai215. Tính khoảng cách trung bình giữa các giá trị trong mảng (khoangcachtb).

double KhoangCachTrungBinh(int a[], int n)
{
    if (n < 2)
        return 0; // Không có khoảng cách nếu mảng có 0 hoặc 1 phần tử

    int tong = 0;
    for (int i = 0; i < n - 1; i++)
    {
        tong += abs(a[i + 1] - a[i]);
    }
    return (double)tong / (n - 1);
}

int main()
{
    int n = 6;
    int a[n] = {5, 10, 3, 8, 15, 12};

    cout << "Khoang cach trung binh giua cac gia tri la: "
         << KhoangCachTrungBinh(a, n);
    return 0;
}
