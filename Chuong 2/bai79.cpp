
#include <iostream>
using namespace std;

// Bài 79: Đếm số lượng chữ số của số nguyên dương n
int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    cout << "So luong chu so la: " << count << endl;
    return 0;
}
