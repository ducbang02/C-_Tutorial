
#include <iostream>
using namespace std;

int main() {
    int n;
    bool allEven = true;
    cout << "Nhap n: ";
    cin >> n;
    while (n > 0) {
        if ((n % 10) % 2 != 0) {
            allEven = false;
            break;
        }
        n /= 10;
    }
    if (allEven)
        cout << "So toan chu so chan." << endl;
    else
        cout << "So khong toan chu so chan." << endl;
    return 0;
}
