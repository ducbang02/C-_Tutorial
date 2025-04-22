#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, S = 1 + x;
    int n;
    cout << "Nhap x va n: ";
    cin >> x >> n;
    long long gt = 1;
    for (int i = 1; i <= n; ++i)
    {
        int mu = 2 * i + 1;
        for (int j = gt + 1; j <= mu; ++j)
            gt *= j;
        S += pow(x, mu) / gt;
    }
    cout << "S(n) = " << S << endl;
    return 0;
}
