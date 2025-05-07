#include <iostream>
using namespace std;

// bai242. Hãy kiểm tra mảng số nguyên có tồn tại giá trị chẵn hay không?
// Nếu không tồn tại giá trị chẵn trả về giá trị 0, hay ngược lại trả về 1 (tontaichan).
int KiemTra(int array[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (array[i] % 2 == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n = 6;
    int array[n] = {5, 2, 7, 9, 1, 0};

    cout << "Ket Qua: " << KiemTra(array, n);

    return 0;
}