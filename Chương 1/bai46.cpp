
#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Nhap n: ";
    cin >> n;
    while (n > 0) {
        if ((n % 10) % 2 == 1)
            count++;
        n /= 10;
    }
    cout << "So chu so le la: " << count << endl;
    return 0;
}
