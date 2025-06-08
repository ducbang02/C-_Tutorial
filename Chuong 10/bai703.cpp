#include <iostream>

using namespace std;
// 703. Hãy cài đặt hàm đệ qui tính T(n) = n! = 1 x 2 x 3 x … x n. Trong đó T(0) = 1.
int GiaiThua(int n)
{
    if (n == 1)
        return 1;
    return n * GiaiThua(n - 1);
}

int main()
{
    cout << GiaiThua(4);
    return 0;
}