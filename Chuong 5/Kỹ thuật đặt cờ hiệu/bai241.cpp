#include <iostream>
using namespace std;

// bai240. Hãy kiểm tra mảng số nguyên có tồn tại hai giá trị
// không liên tiếp hay không? (haikhong).
int KiemTra(int array[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (array[i] + array[i + 1] != 0)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n = 6;
    int array[n] = {5, 2, 7, 9, 1, 0};

    cout << "Ket Qua: " << KiemTra(array, n);

    return 0;
}