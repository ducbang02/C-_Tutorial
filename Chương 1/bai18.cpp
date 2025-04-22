#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, S = 1;
    int n;
    cout << "Nhap x va n: ";
    cin >> x >> n;
    long long gt = 1;
    for (int i = 1; i <= n; ++i)
    {
        gt *= (2 * i - 1) * (2 * i); // tính (2i)!
        S += pow(x, 2 * i) / gt;
    }
    cout << "S(n) = " << S << endl;
    return 0;
}
