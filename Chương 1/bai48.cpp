
#include <iostream>
using namespace std;

int main() {
    int n, product = 1;
    cout << "Nhap n: ";
    cin >> n;
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 == 1)
            product *= digit;
        n /= 10;
    }
    cout << "Tich chu so le la: " << product << endl;
    return 0;
}
