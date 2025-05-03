// Bài 183: Liệt kê vị trí giá trị lớn nhất trong mảng số thực
#include <iostream>
using namespace std;

void listMaxPositions(double arr[], int n)
{
    double maxVal = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > maxVal)
            maxVal = arr[i];
    cout << "Vi tri cac phan tu lon nhat: ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == maxVal)
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
    listMaxPositions(arr, n);
    return 0;
}
