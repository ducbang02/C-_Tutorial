
#include <iostream>
using namespace std;

int main() {
    int n, reversed = 0;
    cout << "Nhap n: ";
    cin >> n;
    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    cout << "So dao nguoc la: " << reversed << endl;
    return 0;
}
