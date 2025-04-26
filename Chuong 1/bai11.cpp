#include <iostream>
using namespace std;

int main()
{
    int n;
    long long term = 1;
    long long S = 1;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 2; i <= n; ++i)
    {
        term *= i;
        S += term;
    }
    cout << "S(n) = " << S << endl;
    return 0;
}
