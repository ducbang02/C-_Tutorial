// Bài 208: Liệt kê các giá trị có toàn chữ số nguyên tố
#include <iostream>
using namespace std;

bool isPrimeDigit(int d)
{
    return d == 2 || d == 3 || d == 5 || d == 7;
}

bool allPrimeDigits(int n)
{
    n = abs(n);
    if (n == 0)
        return false;
    while (n > 0)
    {
        int digit = n % 10;
        if (!isPrimeDigit(digit))
            return false;
        n /= 10;
    }
    return true;
}

void listAllPrimeDigits(int arr[], int n)
{
    cout << "Cac so co toan chu so nguyen to: ";
    for (int i = 0; i < n; i++)
    {
        if (allPrimeDigits(arr[i]))
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
    listAllPrimeDigits(arr, n);
    return 0;
}
