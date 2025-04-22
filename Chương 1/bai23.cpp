
#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; ++i)
        if (n % i == 0) count++;
    cout << "So luong uoc so cua " << n << " la: " << count << endl;
    return 0;
}
