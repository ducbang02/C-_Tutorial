
#include <iostream>
using namespace std;

// Bài 96: Tính giá trị hàm số f(x)
int main() {
    float x, f;
    cout << "Nhap x: ";
    cin >> x;
    if (x >= 5)
        f = 2 * x * x + 5 * x + 9;
    else
        f = -2 * x * x + 4 * x - 9;
    cout << "Gia tri f(x) = " << f << endl;
    return 0;
}
