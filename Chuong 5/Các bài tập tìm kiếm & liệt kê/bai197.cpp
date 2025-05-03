// Bài 197: Liệt kê giá trị có chữ số đầu tiên lẻ
#include <iostream>
using namespace std;

int firstDigit(int n)
{
    n = abs(n);
    while (n >= 10)
        n /= 10;
    return n;
}

void listFirstDigitOdd(int arr[], int n)
{
    cout << "Cac so co chu so dau tien le: ";
    for (int i = 0; i < n; i++)
    {
        if (firstDigit(arr[i]) % 2 != 0)
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
    listFirstDigitOdd(arr, n);
    return 0;
}
