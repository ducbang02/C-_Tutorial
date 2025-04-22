
#include <iostream>
using namespace std;

int main() {
    int n, reversed = 0, original;
    cout << "Nhap n: ";
    cin >> n;
    original = n;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    if (original == reversed)
        cout << "So doi xung." << endl;
    else
        cout << "Khong phai so doi xung." << endl;
    return 0;
}
