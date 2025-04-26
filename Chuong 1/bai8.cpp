#include <iostream>
using namespace std;

int main()
{
    int n;
    double S = 0;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i <= n; ++i)
        S += (2.0 * i + 1) / (2.0 * i + 2);
    cout << "S(n) = " << S << endl;
    return 0;
}
