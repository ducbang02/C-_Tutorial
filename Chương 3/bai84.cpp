
#include <iostream>
using namespace std;

// Bài 84: Giải phương trình ax + b = 0
int main() {
    float a, b;
    cout << "Nhap a, b: ";
    cin >> a >> b;
    if (a == 0) {
        if (b == 0) cout << "Phuong trinh vo so nghiem" << endl;
        else cout << "Phuong trinh vo nghiem" << endl;
    } else {
        cout << "Nghiem x = " << -b / a << endl;
    }
    return 0;
}
