
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 2; i <= n; i += 2)
        if (n % i == 0) sum += i;
    cout << "Tong cac uoc so chan cua " << n << " la: " << sum << endl;
    return 0;
}
