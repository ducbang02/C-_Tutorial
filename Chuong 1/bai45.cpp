
#include <iostream>
using namespace std;

int main() {
    int n, product = 1;
    cout << "Nhap n: ";
    cin >> n;
    while (n > 0) {
        product *= n % 10;
        n /= 10;
    }
    cout << "Tich cac chu so la: " << product << endl;
    return 0;
}
