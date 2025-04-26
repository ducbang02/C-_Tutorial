
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    double S = 0;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; ++i)
        S = sqrt(2 + S);
    cout << "S(n) = " << S << endl;
    return 0;
}
