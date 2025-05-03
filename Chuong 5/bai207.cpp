// Bài 207: Liệt kê các giá trị có toàn chữ số chẵn
#include <iostream>
using namespace std;

bool allEvenDigits(int n)
{
    n = abs(n);
    while (n > 0)
    {
        int digit = n % 10;
        if (digit % 2 != 0)
            return false;
        n /= 10;
    }
    return true;
}

void listAllEvenDigits(int arr[], int n)
{
    cout << "Cac so co toan chu so chan: ";
    for (int i = 0; i < n; i++)
    {
        if (allEvenDigits(arr[i]))
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
    listAllEvenDigits(arr, n);
    return 0;
}
