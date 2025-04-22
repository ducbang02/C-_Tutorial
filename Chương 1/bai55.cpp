
#include <iostream>
using namespace std;

int main() {
    int n, firstDigit;
    cout << "Nhap n: ";
    cin >> n;
    firstDigit = n;
    while (firstDigit >= 10)
        firstDigit /= 10;
    int count = 0;
    int temp = n;
    while (temp > 0) {
        if (temp % 10 == firstDigit) count++;
        temp /= 10;
    }
    cout << "So lan xuat hien cua chu so dau tien la: " << count << endl;
    return 0;
}
