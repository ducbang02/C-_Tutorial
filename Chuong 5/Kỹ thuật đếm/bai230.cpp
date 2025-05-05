#include <iostream>
using namespace std;

// bai229. Hãy liệt kê tần suất xuất hiện của các giá trị
// xuất hiện trong mảng (lietke). (Lưu ý: mỗi giá trị liệt kê một lần).

void LietKeTanSuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool daXet = false;

        // Kiểm tra xem a[i] đã được xét chưa
        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                daXet = true;
                break;
            }
        }

        if (!daXet)
        {
            // Đếm số lần xuất hiện của a[i]
            int dem = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    dem++;
                }
            }
            cout << "Gia tri " << a[i] << " xuat hien " << dem << " lan." << endl;
        }
    }
}

int main()
{
    int n = 10;
    int a[n] = {3, 5, 3, 8, 5, 9, 10, 8, 3, 5};

    LietKeTanSuat(a, n);

    return 0;
}