#include <iostream>

using namespace std;
// 702. Tính S(n) = 1 + 2 + 3 + … + n.
int Tong(int n)
{
    if (n == 1)
        return 1;
    return n + Tong(n - 1);
}

int main()
{
    cout << Tong(3);
    return 0;
}