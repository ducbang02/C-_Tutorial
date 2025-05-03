// Bài 202: Liệt kê các số nguyên tố có ít nhất một lân cận cũng nguyên tố
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

void listPrimeWithPrimeNeighbor(int arr[], int n)
{
    cout << "Cac so nguyen to co lan can cung nguyen to: ";
    for (int i = 0; i < n; i++)
    {
        if (isPrime(arr[i]))
        {
            if ((i > 0 && isPrime(arr[i - 1])) || (i < n - 1 && isPrime(arr[i + 1])))
                cout << arr[i] << " ";
        }
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
    listPrimeWithPrimeNeighbor(arr, n);
    return 0;
}
