
#include <iostream>
using namespace std;

// Bài 86: Tính S(n) = 1^3 + 2^3 + ... + n^3
int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    long long sum = 0;
    for (int i = 1; i <= n; ++i)
        sum += (long long)i * i * i;
    cout << "Tong S(n) = " << sum << endl;
    return 0;
}
