
#include <iostream>
using namespace std;

bool isDecreasing(int n) {
    int prevDigit = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit <= prevDigit && prevDigit != 0) return false;
        prevDigit = digit;
        n /= 10;
    }
    return true;
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    if (isDecreasing(n))
        cout << "Cac chu so giam dan tu trai sang phai." << endl;
    else
        cout << "Cac chu so khong giam dan." << endl;
    return 0;
}
