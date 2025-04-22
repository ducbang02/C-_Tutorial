
#include <iostream>
using namespace std;

bool isIncreasing(int n) {
    int prevDigit = 10; // lớn hơn mọi chữ số
    while (n > 0) {
        int digit = n % 10;
        if (digit >= prevDigit) return false;
        prevDigit = digit;
        n /= 10;
    }
    return true;
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    if (isIncreasing(n))
        cout << "Cac chu so tang dan tu trai sang phai." << endl;
    else
        cout << "Cac chu so khong tang dan." << endl;
    return 0;
}
