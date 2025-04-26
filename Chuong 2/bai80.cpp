
#include <iostream>
using namespace std;

// Bài 80: Tính S(n) = x + x^2/(1+2) + x^3/(1+2+3) + ... + x^n/(1+2+...+n)
int main() {
    int n, x;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;
    double sum = 0;
    int denominator = 0;
    for (int i = 1; i <= n; i++) {
        denominator += i;
        double term = 1;
        for (int j = 1; j <= i; j++) {
            term *= x;
        }
        sum += term / denominator;
    }
    cout << "Tong S(n) = " << sum << endl;
    return 0;
}
