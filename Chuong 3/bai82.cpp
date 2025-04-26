
#include <iostream>
using namespace std;

// Bài 82: Tìm số lớn nhất trong ba số thực a, b, c
int main() {
    float a, b, c;
    cout << "Nhap a, b, c: ";
    cin >> a >> b >> c;
    float maxVal = (a > b) ? a : b;
    maxVal = (maxVal > c) ? maxVal : c;
    cout << "So lon nhat la: " << maxVal << endl;
    return 0;
}
