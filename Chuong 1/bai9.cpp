#include <iostream>
using namespace std;

int main()
{
    int n;
    long long T = 1;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; ++i)
        T *= i;
    cout << "T(n) = " << T << endl;
    return 0;
}
