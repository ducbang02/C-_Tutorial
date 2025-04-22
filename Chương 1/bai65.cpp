
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, delta;
    cout << "Nhap a, b, c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        if (b == 0)
            cout << (c == 0 ? "Phuong trinh vo so nghiem." : "Phuong trinh vo nghiem.") << endl;
        else
            cout << "Nghiem x = " << -c / b << endl;
    } else {
        delta = b*b - 4*a*c;
        if (delta < 0)
            cout << "Phuong trinh vo nghiem." << endl;
        else if (delta == 0)
            cout << "Nghiem kep x = " << -b / (2*a) << endl;
        else {
            double x1 = (-b + sqrt(delta)) / (2*a);
            double x2 = (-b - sqrt(delta)) / (2*a);
            cout << "Hai nghiem x1 = " << x1 << ", x2 = " << x2 << endl;
        }
    }
    return 0;
}
