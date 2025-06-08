#include <iostream>

using namespace std;
// 705. Viết hàm đệ qui tính số hạng thứ n của dãy Fibo. Dãy Fibo được định nghĩa
// như sau: f(0) = f(1) = 1, f(n) = f(n-1) + f(n-2) với n > 1.
// Điều kiện dừng: f(0) = f(1) = 1 và f(n) = f(n-1) + f(n-2) khi n > 1.

int Fibo(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return Fibo(n - 1) + Fibo(n - 2);
}

int main()
{
    cout << Fibo(4);
    return 0;
}