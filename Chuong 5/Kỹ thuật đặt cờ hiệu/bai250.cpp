#include <iostream>
using namespace std;

// bai250. Hãy cho biết các phần tử trong mảng có lập thành cấp số cộng không?
// Nếu có hãy chỉ ra công sai d. (ktscc).
int KiemTra(int a[], int n)
{
    int d = a[1] - a[0];
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] - a[i] != d)
        {
            return INT32_MIN;
        }
    }
    return d;
}

int main()
{
    int n = 6;
    int array[n] = {1, 3, 5, 7, 9, 15};

    cout << "Ket Qua: " << KiemTra(array, n);

    return 0;
}