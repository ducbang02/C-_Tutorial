// Bài 181: Liệt kê giá trị chẵn có ít nhất một lân cận cũng chẵn
#include <iostream>
using namespace std;

void listEvenWithEvenNeighbor(int arr[], int n)
{
    cout << "Cac so chan co it nhat 1 lan can cung chan: ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            if ((i > 0 && arr[i - 1] % 2 == 0) || (i < n - 1 && arr[i + 1] % 2 == 0))
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
    listEvenWithEvenNeighbor(arr, n);
    return 0;
}
