
#include <iostream>
using namespace std;

// Bài 92: Tìm ước số chung lớn nhất của hai số
int main() {
    int a, b;
    cout << "Nhap a, b: ";
    cin >> a >> b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    cout << "UCLN la: " << a << endl;
    return 0;
}
