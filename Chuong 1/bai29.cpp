
#include <iostream>
using namespace std;

int main() {
    int n, maxOdd = 1;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = n; i >= 1; --i)
        if (n % i == 0 && i % 2 == 1) {
            maxOdd = i;
            break;
        }
    cout << "Uoc so le lon nhat cua " << n << " la: " << maxOdd << endl;
    return 0;
}
