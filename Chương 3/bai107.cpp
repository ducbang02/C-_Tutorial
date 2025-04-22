
#include <iostream>
#include <cmath>
using namespace std;

// Bài 107: Viết hàm tính S = sqrt(x^n) (n là số nguyên dương)
double tinhS(double x, int n) {
    return sqrt(pow(x, n));
}

int main() {
    double x;
    int n;
    cout << "Nhap x va n: ";
    cin >> x >> n;
    cout << "Gia tri S = " << tinhS(x, n) << endl;
    return 0;
}
