
#include <iostream>
#include <cmath>
using namespace std;

long long factorial(int x) {
    long long res = 1;
    for (int i = 2; i <= x; ++i)
        res *= i;
    return res;
}

int main() {
    int n;
    double S = 0;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; ++i)
        S = sqrt(factorial(i) + S);
    cout << "S(n) = " << S << endl;
    return 0;
}
