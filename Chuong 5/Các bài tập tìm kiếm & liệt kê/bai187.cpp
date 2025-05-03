// Bài 187: Liệt kê vị trí giá trị bằng giá trị dương nhỏ nhất trong mảng
#include <iostream>
using namespace std;

void listMinPositivePositions(double arr[], int n)
{
    double minPositive = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            if (minPositive == -1 || arr[i] < minPositive)
                minPositive = arr[i];
        }
    }
    if (minPositive == -1)
    {
        cout << "Khong co gia tri duong trong mang." << endl;
        return;
    }
    cout << "Vi tri cac phan tu bang gia tri duong nho nhat: ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == minPositive)
            cout << i << " ";
    }
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
    listMinPositivePositions(arr, n);
    return 0;
}
