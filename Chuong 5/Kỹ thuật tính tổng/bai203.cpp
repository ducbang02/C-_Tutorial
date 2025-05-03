// Bài 203: Liệt kê các số Fibonacci trong mảng số nguyên
#include <iostream>
using namespace std;

bool isFibonacci(int n)
{
    if (n < 0)
        return false;
    int a = 0, b = 1;
    while (b < n)
    {
        int temp = b;
        b = a + b;
        a = temp;
    }
    return (n == b || n == 0 || n == 1);
}

void listFibonacciNumbers(int arr[], int n)
{
    cout << "Cac so Fibonacci trong mang: ";
    for (int i = 0; i < n; i++)
    {
        if (isFibonacci(arr[i]))
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
    listFibonacciNumbers(arr, n);
    return 0;
}
