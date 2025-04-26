#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    double S = 0;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        sum += i;
        S += 1.0 / sum;
    }
    cout << "S(n) = " << S << endl;
    return 0;
}
