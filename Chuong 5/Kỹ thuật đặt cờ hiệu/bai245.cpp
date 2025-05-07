#include <iostream>
using namespace std;

// bai245. Hãy cho biết mảng các số nguyên có toàn số chẵn hay không?
// Nếu có tồn tại giá trị lẻ trả về giá trị 0, ngược lại trả về 1 (kttoanchan).
int KiemTra(int array[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (array[i] % 2 == 1)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n = 6;
    int array[n] = {2, 2, 2, 2, 2, 0};

    cout << "Ket Qua: " << KiemTra(array, n);

    return 0;
}