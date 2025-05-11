#include <iostream>

using namespace std;
// 267. Hãy viết hàm nhập mảng một chiều các số thực sao cho khi mảng nhập xong
// các giá trị trong mảng được sắp giảm dần (không sắp xếp sau khi nhập).

void nhapGiamDan(float a[], int &n)
{
    cout << "Nhap so luong phan tu: ";
    cin >> n;

    float x;
    for (int i = 0; i < n; ++i)
    {
        cout << "Nhap a[" << i << "]: ";
        cin >> x;

        // Tìm vị trí chèn sao cho mảng giảm dần
        int j = i - 1;
        while (j >= 0 && a[j] < x)
        {
            a[j + 1] = a[j]; // Dời phần tử sang phải
            j--;
        }
        a[j + 1] = x; // Chèn x vào đúng vị trí
    }
}

void xuatMang(float a[], int n)
{
    cout << "Mang sau khi nhap: ";
    for (int i = 0; i < n; ++i)
        cout << a[i] << " ";
    cout << endl;
}

int main()
{
    float a[100];
    int n;
    nhapGiamDan(a, n);
    xuatMang(a, n);
    return 0;
}
