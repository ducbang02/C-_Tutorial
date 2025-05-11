#include <iostream>
using namespace std;

// 270. Viết chương trình thực hiện các yêu cầu sau: Nhập mảng n số nguyên từ
// bàn phím sao cho khi nhập xong các phần tử trong mảng được sắp theo thứ tự
// tăng dần (nhapbaotoan).

// Hàm chèn x vào mảng tăng dần
void ChenTangDan(int a[], int &n, int x)
{
    int k = n;
    // Tìm vị trí k sao cho x < a[k]
    for (int i = 0; i < n; i++)
    {
        if (x < a[i])
        {
            k = i;
            break;
        }
    }
    // Dịch sang phải để chừa chỗ
    for (int i = n; i > k; i--)
    {
        a[i] = a[i - 1];
    }
    a[k] = x;
    n++;
}

void XuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int a[100]; // Mảng đủ lớn
    int n = 0;  // Số phần tử thực tế
    int soLuong;

    cout << "Nhap so luong phan tu: ";
    cin >> soLuong;

    for (int i = 0; i < soLuong; i++)
    {
        int x;
        cout << "Nhap a[" << i << "]: ";
        cin >> x;
        ChenTangDan(a, n, x);
    }

    cout << "Mang sau khi nhap (tang dan): ";
    XuatMang(a, n);
    cout << endl;

    return 0;
}
