#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, S = 0;
    int n;
    cout << "Nhap x va n: ";
    cin >> x >> n;
    long long gt = 1;
    for (int i = 1; i <= n; ++i)
    {
        gt *= i;
        S += pow(x, i) / gt;
    }
    cout << "S(n) = " << S << endl;
    return 0;
}
