
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; ++i)
        if (n % i == 0) sum += i;
    cout << "Tong cac uoc so cua " << n << " la: " << sum << endl;
    return 0;
}
