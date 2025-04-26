
#include <iostream>
#include <cmath>
using namespace std;

// Bài 108: Viết hàm tính S = x^y
double luyThua(double x, int y) {
    return pow(x, y);
}

int main() {
    double x;
    int y;
    cout << "Nhap x va y: ";
    cin >> x >> y;
    cout << "Gia tri x^y = " << luyThua(x, y) << endl;
    return 0;
}
