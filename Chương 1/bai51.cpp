
#include <iostream>
using namespace std;

int main() {
    int n, maxDigit = 0;
    cout << "Nhap n: ";
    cin >> n;
    while (n > 0) {
        int digit = n % 10;
        if (digit > maxDigit) maxDigit = digit;
        n /= 10;
    }
    cout << "Chu so lon nhat la: " << maxDigit << endl;
    return 0;
}
