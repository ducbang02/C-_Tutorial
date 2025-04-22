
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int sq = sqrt(n);
    if (sq * sq == n)
        cout << n << " la so chinh phuong." << endl;
    else
        cout << n << " khong phai la so chinh phuong." << endl;
    return 0;
}
