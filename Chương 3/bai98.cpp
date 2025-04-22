
#include <iostream>
using namespace std;

// Bài 98: Giải hệ phương trình tuyến tính 2 ẩn
int main() {
    float a, b, c, d, e, f, D, Dx, Dy, x, y;
    cout << "Nhap a, b, c, d, e, f: ";
    cin >> a >> b >> c >> d >> e >> f;
    D = a * e - b * d;
    Dx = c * e - b * f;
    Dy = a * f - c * d;
    if (D == 0) {
        if (Dx == 0 && Dy == 0)
            cout << "He phuong trinh vo so nghiem" << endl;
        else
            cout << "He phuong trinh vo nghiem" << endl;
    } else {
        x = Dx / D;
        y = Dy / D;
        cout << "Nghiem x = " << x << ", y = " << y << endl;
    }
    return 0;
}
