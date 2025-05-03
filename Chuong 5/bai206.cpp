// Bài 206: Liệt kê các giá trị là lũy thừa của 2
#include <iostream>
using namespace std;

bool isPowerOfTwo(int n)
{
    if (n <= 0)
        return false;
    while (n > 1)
    {
        if (n % 2 != 0)
            return false;
        n /= 2;
    }
    return true;
}

void listPowersOfTwo(int arr[], int n)
{
    cout << "Cac gia tri la luy thua cua 2: ";
    for (int i = 0; i < n; i++)
    {
        if (isPowerOfTwo(arr[i]))
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
    listPowersOfTwo(arr, n);
    return 0;
}
