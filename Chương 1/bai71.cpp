
#include <iostream>
#include <cmath>
using namespace std;

double tinhS(double x, int n) {
    double S = 0;
    for (int i = 1; i <= n; ++i)
        S += pow(x, i) / i;
    return S;
}

int main() {
    double x;
    int n;
    cout << "Nhap x va n: ";
    cin >> x >> n;
    cout << "S(x, n) = " << tinhS(x, n) << endl;
    return 0;
}
