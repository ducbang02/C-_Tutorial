
#include <iostream>
using namespace std;

int main() {
    int n, k = 0, sum = 0;
    cout << "Nhap n: ";
    cin >> n;
    while (sum + k + 1 < n) {
        ++k;
        sum += k;
    }
    cout << "Gia tri k lon nhat sao cho S(k) < n la: " << k << endl;
    return 0;
}
