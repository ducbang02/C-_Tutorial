
#include <iostream>
using namespace std;

// Bài 77: Tính S(n) = 1 + 2 + 3 + ... + n
int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "Tong S(n) = " << sum << endl;
    return 0;
}
