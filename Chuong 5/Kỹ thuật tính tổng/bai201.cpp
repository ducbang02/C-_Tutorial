// Bài 201: Liệt kê các giá trị lẻ có ít nhất một lân cận lẻ
#include <iostream>
using namespace std;

void listOddWithOddNeighbor(int arr[], int n)
{
    cout << "Cac gia tri le co it nhat 1 lan can le: ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            if ((i > 0 && arr[i - 1] % 2 != 0) || (i < n - 1 && arr[i + 1] % 2 != 0))
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
    listOddWithOddNeighbor(arr, n);
    return 0;
}
