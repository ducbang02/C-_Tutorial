// Bài 200: Liệt kê các giá trị cực tiểu trong mảng số thực
#include <iostream>
using namespace std;

void listLocalMinima(double arr[], int n)
{
    cout << "Cac gia tri cuc tieu: ";
    if (n == 1)
    {
        cout << arr[0] << endl;
        return;
    }
    if (arr[0] < arr[1])
        cout << arr[0] << " ";
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1])
            cout << arr[i] << " ";
    }
    if (arr[n - 1] < arr[n - 2])
        cout << arr[n - 1];
    cout << endl;
}

int main()
{
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    double arr[n];
    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    listLocalMinima(arr, n);
    return 0;
}
