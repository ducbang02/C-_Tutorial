
#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Nhap n: ";
    cin >> n;
    do {
        count++;
        n /= 10;
    } while (n > 0);
    cout << "So luong chu so la: " << count << endl;
    return 0;
}
