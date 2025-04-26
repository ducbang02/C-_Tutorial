
#include <iostream>
using namespace std;

// Bài 87: Tìm số nguyên dương n nhỏ nhất sao cho 1 + 2 + ... + n > 10000
int main() {
    int n = 0, sum = 0;
    while (sum <= 10000) {
        n++;
        sum += n;
    }
    cout << "So nho nhat la: " << n << endl;
    return 0;
}
