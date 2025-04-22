
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Nhap a, b, c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "Day khong phai phuong trinh bac 4 an x." << endl;
        return 0;
    }

    double delta = b*b - 4*a*c;
    if (delta < 0)
        cout << "Phuong trinh vo nghiem." << endl;
    else {
        double y1 = (-b + sqrt(delta)) / (2*a);
        double y2 = (-b - sqrt(delta)) / (2*a);

        bool found = false;
        if (y1 >= 0) {
            cout << "x = " << sqrt(y1) << " hoac x = " << -sqrt(y1) << endl;
            found = true;
        }
        if (y2 >= 0 && y2 != y1) {
            cout << "x = " << sqrt(y2) << " hoac x = " << -sqrt(y2) << endl;
            found = true;
        }
        if (!found)
            cout << "Phuong trinh vo nghiem." << endl;
    }

    return 0;
}
