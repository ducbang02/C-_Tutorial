// Bai204. Tính tổng các giá trị lớn hơn giá trị đứng liền trước nó trong mảng
// một chiều các số thực.
#include <iostream>
using namespace std;

int Tong(int arr[], int n)
{
    int tong = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] > arr[i])
        {
            tong += arr[i + 1];
        }
    }
    return tong;
}

int main()
{
    int n = 6;
    int arr[n] = {55, 66, 55, 300, 3, 9};
    cout << "Tong gia tri nhung phan tu lon hon so lien truoc la: " << Tong(arr, n);
    return 0;
}
