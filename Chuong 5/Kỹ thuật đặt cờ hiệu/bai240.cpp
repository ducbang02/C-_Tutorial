#include <iostream>
using namespace std;

// bai240. Hãy kiểm tra mảng số nguyên có tồn tại giá trị không hay không?
// Nếu không tồn tại giá trị không trả về giá trị 0, ngược lại trả về 1 (tontaikhong).
int KiemTra(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] == 0)
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