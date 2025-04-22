
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Cac uoc so le cua " << n << " la: ";
    for (int i = 1; i <= n; i += 2)
        if (n % i == 0) cout << i << " ";
    cout << endl;
    return 0;
}
