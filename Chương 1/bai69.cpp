
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, S = 0;
    int n;
    cout << "Nhap x va n: ";
    cin >> x >> n;
    for (int i = 0; i <= n; ++i)
        S += pow(-1, i) * pow(x, 2 * i + 1);
    cout << "S(x, n) = " << S << endl;
    return 0;
}
