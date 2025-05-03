// Bài 205: Liệt kê các số chính phương trong mảng số nguyên
#include <iostream>
#include <cmath>
using namespace std;

bool isPerfectSquare(int n)
{
    if (n < 0)
        return false;
    int root = sqrt(n);
    return root * root == n;
}

void listPerfectSquares(int arr[], int n)
{
    cout << "Cac so chinh phuong trong mang: ";
    for (int i = 0; i < n; i++)
    {
        if (isPerfectSquare(arr[i]))
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
    listPerfectSquares(arr, n);
    return 0;
}
