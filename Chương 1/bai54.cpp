
#include <iostream>
using namespace std;

int main() {
    int n, minDigit = 9, count = 0;
    cout << "Nhap n: ";
    cin >> n;
    int temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        if (digit < minDigit) minDigit = digit;
        temp /= 10;
    }
    while (n > 0) {
        if (n % 10 == minDigit) count++;
        n /= 10;
    }
    cout << "So lan xuat hien cua chu so nho nhat la: " << count << endl;
    return 0;
}
