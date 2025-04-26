
#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 2; i <= n; i += 2)
        if (n % i == 0) count++;
    cout << "So luong uoc so chan cua " << n << " la: " << count << endl;
    return 0;
}
