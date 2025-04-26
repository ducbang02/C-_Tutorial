
#include <iostream>
using namespace std;

// Bài 99: In 3 số theo thứ tự tăng dần
int main() {
    float a, b, c;
    cout << "Nhap 3 so: ";
    cin >> a >> b >> c;
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);
    cout << "Thu tu tang dan: " << a << ", " << b << ", " << c << endl;
    return 0;
}
