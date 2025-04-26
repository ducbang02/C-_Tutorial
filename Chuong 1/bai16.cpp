#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, S = 0;
    int n, sum = 0;
    cout << "Nhap x va n: ";
    cin >> x >> n;
    for (int i = 1; i <= n; ++i)
    {
        sum += i;
        S += pow(x, i) / sum;
    }
    cout << "S(n) = " << S << endl;
    return 0;
}
