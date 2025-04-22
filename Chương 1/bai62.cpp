
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int a, b;
    cout << "Nhap a va b: ";
    cin >> a >> b;
    cout << "Uoc chung lon nhat la: " << gcd(a, b) << endl;
    return 0;
}
