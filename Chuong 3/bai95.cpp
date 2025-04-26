
#include <iostream>
using namespace std;

// Bài 95: Nhập 3 số thực, thay các số âm bằng trị tuyệt đối của nó
int main() {
    float a, b, c;
    cout << "Nhap 3 so thuc a, b, c: ";
    cin >> a >> b >> c;
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    if (c < 0) c = -c;
    cout << "Gia tri sau khi bien doi: " << a << " " << b << " " << c << endl;
    return 0;
}
