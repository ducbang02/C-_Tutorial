
#include <iostream>
using namespace std;

long long factorial(int n) {
    long long f = 1;
    for (int i = 2; i <= n; ++i)
        f *= i;
    return f;
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << n << "! = " << factorial(n) << endl;
    return 0;
}
