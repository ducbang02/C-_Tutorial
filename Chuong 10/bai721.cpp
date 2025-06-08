#include <iostream>
using namespace std;

// 721. Cho mảng một chiều các số nguyên. Hãy viết hàm đệ quy đếm số
// lượng giá trị phân biệt có trong mảng.

// Hàm kiểm tra xem arr[index] đã xuất hiện trong đoạn từ 0 đến index-1 chưa
bool daXuatHien(int arr[], int index)
{
    for (int i = 0; i < index; ++i)
    {
        if (arr[i] == arr[index])
        {
            return true;
        }
    }
    return false;
}

// Hàm đệ quy đếm số lượng giá trị phân biệt trong mảng từ 0 đến n-1
int demGiaTriPhanBiet(int arr[], int n)
{
    if (n == 0)
        return 0; // Không có phần tử nào

    // Đệ quy đếm số lượng giá trị phân biệt trong đoạn đầu n-1 phần tử
    int count = demGiaTriPhanBiet(arr, n - 1);

    // Nếu phần tử arr[n - 1] chưa từng xuất hiện trước đó thì tăng biến đếm
    if (!daXuatHien(arr, n - 1))
    {
        count++;
    }

    return count;
}

int main()
{
    int arr[] = {1, 2, 3, 2, 1, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "So luong gia tri phan biet: " << demGiaTriPhanBiet(arr, n) << endl;

    return 0;
}
