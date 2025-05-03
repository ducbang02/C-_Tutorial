// Bài 209: Liệt kê các giá trị có toàn chữ số bằng 0 hoặc 5
#include <iostream>
using namespace std;

bool allDigitsZeroOrFive(int n)
{
    n = abs(n);
    if (n == 0)
        return true;
    while (n > 0)
    {
        int digit = n % 10;
        if (digit != 0 && digit != 5)
            return false;
        n /= 10;
    }
    return true;
}

void listDigitsZeroOrFive(int arr[], int n)
{
    cout << "Cac gia tri chi chua chu so 0 hoac 5: ";
    for (int i = 0; i < n; i++)
    {
        if (allDigitsZeroOrFive(arr[i]))
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
    listDigitsZeroOrFive(arr, n);
    return 0;
}
