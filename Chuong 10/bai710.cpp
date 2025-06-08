#include <iostream>
#include <math.h>

using namespace std;
// 705. Viết hàm đệ qui tính tổng của biểu thức sau đây:
// S(x,n) = x + x²/2 + x³/3 + … + xⁿ/n.
double Tong(int x, int n)
{
    if (n == 1)
        return x;
    return pow(x, n) / n + Tong(x, n - 1);
}

int main()
{
    cout << Tong(2, 3);
    return 0;
}