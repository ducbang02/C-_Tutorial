// Bài 204: Liệt kê các giá trị chia hết cho 7 nhưng không chia hết cho 3
#include <iostream>
using namespace std;

void listDivisibleBy7Not3(int arr[], int n)
{
    cout << "Cac gia tri chia het cho 7 nhung khong chia het cho 3: ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 7 == 0 && arr[i] % 3 != 0)
            cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    int arr[n];
    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    listDivisibleBy7Not3(arr, n);
    return 0;
}
