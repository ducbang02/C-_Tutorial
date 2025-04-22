
#include <iostream>
using namespace std;

int main() {
    int n;
    bool allOdd = true;
    cout << "Nhap n: ";
    cin >> n;
    while (n > 0) {
        if ((n % 10) % 2 == 0) {
            allOdd = false;
            break;
        }
        n /= 10;
    }
    if (allOdd)
        cout << "So toan chu so le." << endl;
    else
        cout << "So khong toan chu so le." << endl;
    return 0;
}
