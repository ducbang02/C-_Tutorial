
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Nhap n: ";
    cin >> n;
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 == 0)
            sum += digit;
        n /= 10;
    }
    cout << "Tong chu so chan la: " << sum << endl;
    return 0;
}
