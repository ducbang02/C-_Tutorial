#include <iostream>
using namespace std;

// 268. Hãy tạo mảng b từ mảng a các giá trị 0, 1 để mảng có tính
// “tính chẵn lẻ” (taomangchanle).

void TaoMangChanLe(int a[], int b[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            b[i] = 0;
        else
            b[i] = 1;
    }
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
    int a[100], b[100], n;

    cout << "Nhap so luong phan tu n: ";
    cin >> n;

    cout << "Nhap mang a:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    TaoMangChanLe(a, b, n);

    cout << "Mang b (chan -> 0, le -> 1): ";
    XuatMang(b, n);
    cout << endl;

    return 0;
}
