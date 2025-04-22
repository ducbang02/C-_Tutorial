
#include <iostream>
#include <cmath>
using namespace std;

// Bài 113: Tính sin(x) với độ chính xác 0.00001
int main() {
    double x, term, sinx;
    int n = 1;
    cout << "Nhap x (radian): ";
    cin >> x;
    term = x;
    sinx = x;
    while (fabs(term) >= 0.00001) {
        term *= (-1) * x * x / ((2 * n) * (2 * n + 1));
        sinx += term;
        n++;
    }
    cout << "sin(" << x << ") = " << sinx << endl;
    return 0;
}
