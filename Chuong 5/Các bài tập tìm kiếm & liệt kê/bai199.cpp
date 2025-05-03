// Bài 199: Liệt kê vị trí số nguyên tố trong mảng số nguyên
#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void listPrimePositions(int arr[], int n)
{
    cout << "Vi tri cac so nguyen to: ";
    for (int i = 0; i < n; i++)
    {
        if (isPrime(arr[i]))
            cout << i << " ";
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
    listPrimePositions(arr, n);
    return 0;
}
