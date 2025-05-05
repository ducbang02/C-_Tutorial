// Bai203. Tính tổng các giá trị có chữ số hàng chục là chữ số 5 có trong mảng
// các số nguyên (tongchuc).
#include <iostream>
using namespace std;

bool KTHangChuc5(int n)
{
    if ((n / 10) % 10 == 5)
        return true;
    return false;
}

int Tong(int arr[], int n)
{
    int tong = 0;
    for (int i = 0; i < n; i++)
    {
        if (KTHangChuc5(arr[i]))
        {
            tong += arr[i];
        }
    }
    return tong;
}

int main()
{
    int n = 6;
    int arr[n] = {55, 66, 55, 300, 3, 9};
    cout << "Tong gia tri co hang chuc bang 5 la: " << Tong(arr, n);
    return 0;
}
